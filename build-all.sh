HOST_PLATFORM=`uname | tr '[A-Z]' '[a-z]'`
bazel test //... --config=$HOST_PLATFORM

if [ -z "$ANDROID_NDK_HOME" ]; then
	echo please set the `ANDROID_NDK_HOME` environment variable first ...
	exit 0
fi
# export ANDROID_NDK_HOME=~/android-ndk-r16-beta1
bazel build //... --config=android_armeabi-v7a
bazel build //... --config=android_arm64-v8a
bazel build //... --config=android_simulator_x86

if [ "$HOST_PLATFORM" == "darwin" ]; then
	cp src/BUILD src/BUILD_bak
	cat src/math_ios.bazel src/BUILD > src/BUILD.ios
	mv src/BUILD.ios src/BUILD
	bazel build //src:MathLiteC_framework --config=ios
	mv src/BUILD_bak src/BUILD
fi
