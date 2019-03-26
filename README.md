# bazel_cross_compile

## linux
    bazel test //... --config=linux

## darwin
    bazel test //... --config=darwin

## ios
  - see `src/math_ios.bazel` for details
    
## android
  - download Android NDK
  - set `ANDROID_NDK_HOME` environment variable
  - build
    ```
    bazel build //... --config=android_armeabi-v7a
    bazel build //... --config=android_arm64-v8a
    bazel build //... --config=android_simulator_x86
    ```

## configs
    see `.bazelrc` for details
