set -e

# Make sure android sdk is in the following location. If you have a different
# location, modify WORKSPACE androidndk path.
if [ ! -d "$HOME/android-ndk-r16b" ]; then
  echo "Android SDK not found under $HOME/android-ndk-r16b"
  exit 1
fi
export ANDROID_NDK_HOME=$HOME/android-ndk-r16b

# Make sure everything checks out, including the test.
HOST_PLATFORM=`uname | tr '[A-Z]' '[a-z]'`
bazel test -c opt --config=$HOST_PLATFORM -- //src/...
# Building libraries for ios
if [ "$HOST_PLATFORM" == "linux" ]; then
	bazel test -c opt --config=$HOST_PLATFORM --define target=sandybridge -- //src/...
fi

# Building libraries for lib.
bazel build -c opt --config=android_armeabi-v7a -- //release:libmath_capi.so
bazel build -c opt --config=android_arm64-v8a -- //release:libmath_capi.so
bazel build -c opt --config=android_simulator_x86 -- //release:libmath_capi.so

# Building libraries for ios
if [ "$HOST_PLATFORM" == "darwin" ]; then
	bazel build -c opt --config=ios -- //release:libmath_capi_lipo
fi

echo "Done."
