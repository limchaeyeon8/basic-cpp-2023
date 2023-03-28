#include<iostream>
using namespace std;

int func(int n)
{
	std::cout << "함수호출" << std::endl;
	return n + 1;
}

int main()
{
	int num = 10;
	int res;
	res = func(num);

	return 0;
}