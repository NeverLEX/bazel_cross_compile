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

#objc_library(
#    name = "math_iphone",
#    srcs = [
#        "math.cc",
#    ],
#    hdrs = [
#        "math.h",
#    ],
#)

apple_static_library(
    name = "math_iphone_lipo",
    minimum_os_version = "6.0",
    platform_type = "ios",
    deps = [
        ":math",
    ],
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
