workspace(name = "com_never_git_bazel_gtest")

load("//build_rules:git.bzl", "git_repo")

git_repo(
    name = "com_github_google_glog",
    remote = "https://github.com/google/glog.git",
)

git_repo(
    name = "com_github_gflags_gflags",
    remote = "https://github.com/gflags/gflags.git",
)

git_repo(
    name = "com_google_googletest",
    remote = "https://github.com/google/googletest.git",
)

android_ndk_repository(
    name = "androidndk",  # Required. Name *must* be "androidndk".
    # path = "/path/to/ndk", # Optional. Can be omitted if `ANDROID_NDK_HOME` environment variable is set.
)
