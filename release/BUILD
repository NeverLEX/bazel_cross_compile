package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "libmath_capi.so",
    linkshared = True,
    deps = [
        "//src/capi:libmath_capi",
    ],
)

apple_static_library(
    name = "libmath_capi_lipo",
    minimum_os_version = "6.0",
    platform_type = "ios",
    deps = [
        "//src/capi:libmath_capi",
    ],
)
