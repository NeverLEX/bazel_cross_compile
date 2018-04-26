#include <iostream>
#include <fstream>
#include "math.h"
#include "gflags/gflags.h"
#include "glog/logging.h"

void PrintFile(const char *filename) {
    std::string line;
    std::ifstream ifs(filename);
    LOG(INFO) << "Output file:" << filename;
    while (std::getline(ifs, line)) {
        std::cout << line << std::endl;
    }
    ifs.close();
    LOG(INFO) << "Output end.";
}

DEFINE_int32(operand_1st, 0, "the first operand.");
DEFINE_int32(operand_2nd, 0, "the first operand.");

int main(int argc, char*argv[]) {
    google::InitGoogleLogging(argv[0]);
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    PrintFile("./testdata/mytestdata/hello.txt");
    PrintFile("./testdata/mytestdata/echo.txt");
    LOG(INFO) << "max(operand_1st, operand_2nd) is " << max(FLAGS_operand_1st, FLAGS_operand_2nd);
    return 0;
}
