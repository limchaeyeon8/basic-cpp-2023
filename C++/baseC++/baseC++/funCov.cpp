#include <iostream>

int func(int a = 10, int b = 20)
{
	return a + b;
}

int main(void)
{
	func();
	func(5);
	func(5, 10);

	return 0;
}