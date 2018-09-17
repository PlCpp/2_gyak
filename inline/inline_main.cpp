#include <iostream>
#include "other.h"

inline double fahr2cels(double x) {
	return 5./9 * (x - 32);
}

int main() {
	
	std::cout << fahr2cels(20) << std::endl;
	std::cout << f() << std::endl;
	
	return 0;
}
