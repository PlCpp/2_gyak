#include <iostream>
#include <bitset>

int main() {
	int hexa = 0xff;
	int hexa2 = 0x1;
	std::cout << hexa << std::endl;
	std::cout << hexa + hexa2 << std::endl;
	std::cout << std::bitset<8>(hexa) << std::endl;
	
	int octa = 010;
	std::cout << octa << std::endl;
}
