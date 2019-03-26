package(default_visibility = ["//visibility:public"])

cc_library(
    name = "math",
    srcs = [
        "math.cc",
    ],
    hdrs = [
        "math.h",
    ],
    linkstatic = True,
)

cc_binary(
    name = "sample",
    srcs = [
        "sample.cc",
    ],
    deps = [
        ":math",
    ],
)

cc_test(
    name = "math_test",
    timeout = "short",
    srcs = [
        "math_test.cc",
    ],
    args = [
        "--data_path=./testdata/mytestdata/",
    ],
    data = [
        "//testdata:mytestdata",
    ],
    deps = [
        ":math",
        "@com_google_googletest//:gtest",
    ],
)
