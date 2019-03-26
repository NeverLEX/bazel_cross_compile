package(default_visibility = ["//visibility:public"])

cc_library(
    name = "libmath_capi_header",
    textual_hdrs = ["libmath_capi.h"],
)

cc_library(
    name = "libmath_capi",
    srcs = ["libmath_capi.cc"],
    hdrs = ["libmath_capi.h"],
    deps = [
        "//src:math",
    ],
)
