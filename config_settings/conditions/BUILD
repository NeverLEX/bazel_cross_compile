package(default_visibility = ["//visibility:public"])

config_setting(
    name = "linux",
    constraint_values = [
        "@bazel_tools//platforms:linux",
    ],
)

config_setting(
    name = "darwin",
    constraint_values = [
        "@bazel_tools//platforms:osx",
    ],
)

config_setting(
    name = "ios",
    values = {
        "ios_multi_cpus": "armv7,arm64,x86_64,i386",
    },
)

config_setting(
    name = "android",
    values = {
        "crosstool_top": "@androidndk//:default_crosstool",
    },
)

config_setting(
    name = "android_armv7",
    values = {
        "cpu": "armeabi-v7a",
        "crosstool_top": "@androidndk//:default_crosstool",
    },
)

config_setting(
    name = "android_arm64",
    values = {
        "cpu": "arm64-v8a",
        "crosstool_top": "@androidndk//:default_crosstool",
    },
)

config_setting(
    name = "android_x86",
    values = {
        "cpu": "x86",
        "crosstool_top": "@androidndk//:default_crosstool",
    },
)

# e. g.
#copts = select({
#    "//config_settings/conditions:android_armv7": ["-fPIC"],
#    "//config_settings/conditions:android_arm64": ["-fPIC"],
#    "//config_settings/conditions:android_x86": ["-fPIC"],
#    "//conditions:default": [],
#})
