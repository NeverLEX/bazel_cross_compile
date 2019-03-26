#include "src/math.h"
#include "src/capi/libmath_capi.h"

extern "C" {
	int min(int a, int b) {
		return math_lib::min(a, b);
	}

	int max(int a, int b) {
		return math_lib::min(a, b);
	}
} // extern "C"