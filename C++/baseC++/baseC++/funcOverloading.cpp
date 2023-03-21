//#include <iostream>
#include <stdio.h>

void func()
{

	//std::cout << "func: " << std::endl;
	printf("func()\n");

}

void func(int a)
{

	//std::cout << "func(a)" << std::endl;
	printf("func(a)\n");

}

int main()
{
	int n = 10;
	func();
	func(n);

	return 0;
}