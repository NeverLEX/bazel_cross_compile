#include <iostream>
#include <fstream>
#include <string.h>
#include "math.h"
#include "gtest/gtest.h"

/*
 * set global environment
 */
class MathEnvironment : public testing::Environment {
public:
....MathEnvironment(int argc, char **argv) {
........for (int i=1; i<argc; i++) {
............if (0==strncmp(argv[i], "--data_path=", 12)){
................test_data_path = argv[i] + 12;
............}
........}
........if (test_data_path=="") test_data_path = "./testdata/mytestdata/";
....}

protected:
    virtual void SetUp() {
........//test_data_path = "./testdata/mytestdata/";
    }

    virtual void TearDown() {
    }

private:
public:
    std::string test_data_path;
};

MathEnvironment *env;

namespace mathsample{
namespace {

/*
 * MathTest, use googletest
 */
class MathTest: public ::testing::TestWithParam<int> {

public:
    static void SetUpTestCase() {
    }

    static void TearDownTestCase() {

    }

protected:
    virtual void SetUp() {
    }

    virtual void TearDown() {

    }

protected:

    int DoMaxTest(int a, int b) {
        return max(a, b);
    }

    int DoMinTest(int a, int b) {
        return min(a, b);
    }

    void DoMaxDataTest(const std::string& datafile) {
        std::string line;
        std::ifstream ifs(datafile.c_str());
        EXPECT_TRUE(ifs.is_open());
        while(std::getline(ifs, line)) {
            int op1 = line[0] - '0', op2 = line[2] - '0', res = line[4] - '0';
            EXPECT_EQ(res, max(op1, op2));
        }
        ifs.close();
    }
};

/*
 * MathValueTest, use googletest
 */
class MathValueTest: public ::testing::TestWithParam<int> {

public:
    static void SetUpTestCase() {
    }

    static void TearDownTestCase() {

    }

protected:
    virtual void SetUp() {
    }

    virtual void TearDown() {

    }

protected:

    int DoMaxTest(int a, int b) {
        return max(a, b);
    }

    int DoMinTest(int a, int b) {
        return min(a, b);
    }
};

/*
 * MathCombineTest, use googletest
 */
class MathCombineTest: public ::testing::TestWithParam<::std::tuple<int, int>> {

public:
    static void SetUpTestCase() {
    }

    static void TearDownTestCase() {

    }

protected:
    virtual void SetUp() {
    }

    virtual void TearDown() {

    }

protected:

    int DoMaxTest(int a, int b) {
        return max(a, b);
    }

    int DoMinTest(int a, int b) {
        return min(a, b);
    }
};

TEST_F(MathTest, MinTest) {
    EXPECT_EQ(3, DoMinTest(3, 5));
    EXPECT_EQ(4, DoMinTest(6, 4));
    EXPECT_EQ(5, DoMinTest(8, 5));
}

TEST_F(MathTest, MaxTest) {
    EXPECT_EQ(5, DoMaxTest(3, 5));
    EXPECT_EQ(6, DoMaxTest(6, 4));
    EXPECT_EQ(8, DoMaxTest(8, 5));
}

TEST_F(MathTest, MaxDataTest) { DoMaxDataTest(env->test_data_path); }

TEST_P(MathValueTest, HandleMinTest)
{
    int op = GetParam();
    int exp = op < 3 ? op : 3;
    EXPECT_EQ(exp, min(3, op));
}

INSTANTIATE_TEST_CASE_P(HandleMinTest,
                        MathValueTest,
                        testing::Values(1, 2, 3, 4, 5, 6, 7, 8, 9));

TEST_P(MathValueTest, HandleMaxTest)
{
    int op = GetParam();
    int exp = op > 3 ? op : 3;
    EXPECT_EQ(exp, max(3, op));
}

INSTANTIATE_TEST_CASE_P(HandleMaxTest,
                        MathValueTest,
                        testing::Values(1, 2, 3, 4, 5, 6, 7, 8, 9));

TEST_P(MathCombineTest, HandleMinTest)
{
    int op1 = ::std::get<0>(GetParam());
    int op2 = ::std::get<1>(GetParam());
    int exp = op1 < op2 ? op1 : op2;
    EXPECT_EQ(exp, min(op1, op2));
}

INSTANTIATE_TEST_CASE_P(HandleMinTest,
                        MathCombineTest,
                        testing::Combine(testing::Values(1, 3, 5, 7, 9), testing::Values(2, 4, 6, 8, 10)));

TEST_P(MathCombineTest, HandleMaxTest)
{
    int op1 = ::std::get<0>(GetParam());
    int op2 = ::std::get<1>(GetParam());
    int exp = op1 > op2 ? op1 : op2;
    EXPECT_EQ(exp, max(op1, op2));
}

INSTANTIATE_TEST_CASE_P(HandleMaxTest,
                        MathCombineTest,
                        testing::Combine(testing::Values(1, 3, 5, 7, 9), testing::Values(2, 4, 6, 8, 10)));

}  // namespace
}  // namespace mathsample

GTEST_API_ int main(int argc, char **argv) {
    env = new MathEnvironment(argc, argv);
    testing::AddGlobalTestEnvironment(env);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

