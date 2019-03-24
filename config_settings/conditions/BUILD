package(default_visibility = ["//visibility:public"])

config_setting(
    name = "android_armv7",
    values = {
        "cpu": "armeabi-v7a",
    },
)

config_setting(
    name = "android_arm64",
    values = {
        "cpu": "arm64-v8a",
    },
)

config_setting(
    name = "android_x86",
    values = {
        "cpu": "x86",
    },
)

# e. g.
#copts = select({
#    "//config_settings/conditions:android_armv7": ["-fPIC"],
#    "//config_settings/conditions:android_arm64": ["-fPIC"],
#    "//config_settings/conditions:android_x86": ["-fPIC"],
#    "//conditions:default": [],
#})
