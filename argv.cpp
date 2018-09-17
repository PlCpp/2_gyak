#include <iostream>

int main(int argc, char** argv) {
	
	std::cout << argc << " " << argv[0] << std::endl;
	
	if (argc != 5) {
		std::cerr << "Missing paramether!\n";
		return 1;
	}
		
}
