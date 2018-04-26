package(default_visibility = ["//visibility:public"])

cc_library(
    name = "math",
    hdrs = [
        "math.h",
    ],
    srcs = [
        "math.cc",
    ],
)

cc_binary(
    name = "sample",
    srcs = [
        "sample.cc",
    ],
    deps = [
        #"//src:math",
        ":math",
        "@com_github_gflags_gflags//:gflags",
        "@com_github_google_glog//:glog",
    ],
)

cc_test(
    name = "math_test",
    srcs = [
        "math_test.cc",
    ],
    deps = [
        #"//src:math",
        ":math",
        "@com_google_googletest//:gtest",
    ],
    data = [
        "//testdata:mytestdata",
    ],
    timeout="short",
)
