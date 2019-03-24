# bazel_cross_compile

## linux
    bazel test //... --config=linux

## darwin & ios
  - take a look at .bazelrc
  - set platform type of ios (--ios-multi-cpus)
  - build
    ```
    bazel test //... --config=darwin
    ```
  
    Note: If you want to build a library for iOS, you need to use `apple_static_library` in the BUILD file.
    
## android
  - download Android NDK
  - set `ANDROID_NDK_HOME` environment variable
  - build
    ```
    bazel test //... --config=android_armeabi-v7a
    bazel test //... --config=android_arm64-v8a
    bazel test //... --config=android_simulator_x86
    ```
    
## TODO
    Disable Android test builds with configuration settings
