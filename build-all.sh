export ANDROID_NDK_HOME=~/android-ndk-r16-beta1
HOST_PLATFORM=`uname | tr '[A-Z]' '[a-z]'`

bazel test //... --config=$HOST_PLATFORM
bazel test //... --config=android_armeabi-v7a
bazel test //... --config=android_arm64-v8a
bazel test //... --config=android_simulator_x86
