#include <iostream>

int Adder(int num1 = 10, int num2 = 20)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(5, 10) << std::endl;

	return 0;
}