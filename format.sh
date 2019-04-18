# Format all BUILD files.
#
# You need to install buildifier, c.f.,
# https://github.com/bazelbuild/buildtools/tree/master/buildifier
buildifier WORKSPACE
find . -not -path './bazel-*' -name BUILD | xargs buildifier

# Format C, C++ and proto files.
#
# You need to install clang-format, c.f.,
# https://clang.llvm.org/docs/ClangFormat.html
find . -not -path './bazel-*' -name '*.proto' | xargs clang-format -i
find . -not -path './bazel-*' -name '*.h' | xargs clang-format -i
find . -not -path './bazel-*' -name '*.hpp' | xargs clang-format -i
find . -not -path './bazel-*' -name '*.c' | xargs clang-format -i
find . -not -path './bazel-*' -name '*.cc' | xargs clang-format -i
find . -not -path './bazel-*' -name '*.cpp' | xargs clang-format -i

# Fix all python files.
#
# You need to install yapf, c.f., https://github.com/google/yapf
yapf -ir .
