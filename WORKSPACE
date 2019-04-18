workspace(name = "com_never_git_bazel_gtest")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "com_google_googletest",
    branch = "master",
    remote = "https://github.com/google/googletest.git",
)

# android ndk
android_ndk_repository(
    name = "androidndk",  # Required. Name *must* be "androidndk".
    # path = "/path/to/ndk", # Optional. Can be omitted if `ANDROID_NDK_HOME` environment variable is set.
)
