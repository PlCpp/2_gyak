#include <iostream>
#include "namespaceA.h"
#include "point.h"

//using namespace A;

int main() {
	
	std::cout << A::f() << " " << A::g() << std::endl;
	A::Point p;
	
	return 0;
}
