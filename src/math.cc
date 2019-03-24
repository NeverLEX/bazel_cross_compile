#include <iostream>
#include "math.h"

namespace math_lib {

	int max(int a, int b) {
  		return a>b ? a : b;
	}

	int min(int a, int b) {
  		return a<b ? a : b;
	}
}
