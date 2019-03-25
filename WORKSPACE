workspace(name = "com_never_git_bazel_gtest")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")

# Apple and Swift rules.
http_archive(
    name = "build_bazel_rules_apple",
    sha256 = "4b90786009fa8df25230442244bad2832ba8d6bc4987f68150a7de59c8827e90",
    strip_prefix = "rules_apple-0.14.0",
    urls = ["https://github.com/bazelbuild/rules_apple/archive/0.14.0.tar.gz"],
)

http_file(
    name = "xctestrunner",
    executable = 1,
    urls = ["https://github.com/google/xctestrunner/releases/download/0.2.6/ios_test_runner.par"],
)

http_archive(
    name = "bazel_skylib",
    sha256 = "2c62d8cd4ab1e65c08647eb4afe38f51591f43f7f0885e7769832fa137633dcb",
    strip_prefix = "bazel-skylib-0.7.0",
    urls = ["https://github.com/bazelbuild/bazel-skylib/archive/0.7.0.tar.gz"],
)

http_archive(
    name = "build_bazel_apple_support",
    sha256 = "835663c4bb02f4bf01dce8a2a176df7fa682dbb867d3698ae12258c1628bb8f0",
    strip_prefix = "apple_support-0.5.0",
    urls = ["https://github.com/bazelbuild/apple_support/archive/0.5.0.tar.gz"],
)

http_archive(
    name = "build_bazel_rules_swift",
    sha256 = "32d124878cd49775d84f59ba90440c8b23b7c775aec8fec1978f751c76ddee8a",
    strip_prefix = "rules_swift-0.7.0",
    urls = ["https://github.com/bazelbuild/rules_swift/archive/0.7.0.tar.gz"],
)

http_archive(
    name = "com_github_apple_swift_swift_protobuf",
    strip_prefix = "swift-protobuf-1.2.0/",
    type = "zip",
    urls = ["https://github.com/apple/swift-protobuf/archive/1.2.0.zip"],
)

# android ndk
android_ndk_repository(
    name = "androidndk",  # Required. Name *must* be "androidndk".
    # path = "/path/to/ndk", # Optional. Can be omitted if `ANDROID_NDK_HOME` environment variable is set.
)

# git repo
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
