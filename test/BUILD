package(default_visibility = ["//visibility:public"])

genrule(
    name = "test",
    srcs = [],
    outs = ["test.out"],
    cmd = select({
        "//config_settings/conditions:linux": "echo linux > $@",
        "//config_settings/conditions:linux_sandybridge": "echo linux_sandybridge > $@",
        "//config_settings/conditions:darwin": "echo darwin > $@",
        "//config_settings/conditions:ios": "echo ios > $@",
        "//config_settings/conditions:android": "echo android > $@",
        "//conditions:default": "echo default > $@",
    }),
)

genrule(
    name = "test_detail",
    srcs = [],
    outs = ["test_detail.out"],
    cmd = select({
        "//config_settings/conditions:linux": "echo linux > $@",
        "//config_settings/conditions:linux_sandybridge": "echo linux_sandybridge > $@",
        "//config_settings/conditions:darwin": "echo darwin > $@",
        "//config_settings/conditions:ios": "echo ios > $@",
        "//config_settings/conditions:android_armv7": "echo android_armv7 > $@",
        "//config_settings/conditions:android_arm64": "echo android_arm64 > $@",
        "//config_settings/conditions:android_x86": "echo android_x86 > $@",
        "//conditions:default": "echo default > $@",
    }),
)
