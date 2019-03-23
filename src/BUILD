package(default_visibility = ["//visibility:public"])

cc_library(
    name = "math",
    srcs = [
        "math.cc",
    ],
    hdrs = [
        "math.h",
    ],
    #copts = select({
    #    "//config_settings/conditions:android_armv7": ["-fPIC"],
    #    "//config_settings/conditions:android_arm64": ["-fPIC"],
    #    "//config_settings/conditions:android_x86": ["-fPIC"],
    #    "//conditions:default": [],
    #}),
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
    #copts = select({
    #    "//config_settings/conditions:android_armv7": ["-fPIC"],
    #    "//config_settings/conditions:android_arm64": ["-fPIC"],
    #    "//config_settings/conditions:android_x86": ["-fPIC"],
    #    "//conditions:default": [],
    #}),
    #linkopts = select({
    #    "//config_settings/conditions:android_armv7": ["-ldl"],
    #    "//config_settings/conditions:android_arm64": ["-ldl"],
    #    "//config_settings/conditions:android_x86": ["-ldl"],
    #    "//conditions:default": [],
    #}),
    deps = [
        #"//src:math",
        ":math",
        #"@com_github_gflags_gflags//:gflags",
        #"@com_github_google_glog//:glog",
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
    #copts = select({
    #    "//config_settings/conditions:android_armv7": ["-fPIC"],
    #    "//config_settings/conditions:android_arm64": ["-fPIC"],
    #    "//config_settings/conditions:android_x86": ["-fPIC"],
    #    "//conditions:default": [],
    #}),
    data = [
        "//testdata:mytestdata",
    ],
    #linkopts = select({
    #    "//config_settings/conditions:android_armv7": ["-ldl"],
    #    "//config_settings/conditions:android_arm64": ["-ldl"],
    #    "//config_settings/conditions:android_x86": ["-ldl"],
    #    "//conditions:default": [],
    #}),
    deps = [
        #"//src:math",
        ":math",
        "@com_google_googletest//:gtest",
    ],
)
