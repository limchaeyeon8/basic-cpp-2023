#include <iostream>

#define SUM(x, y)	x + y		// 매크로 함수
#define SQUARE(x)	x * x
#define SQUARE1(x)	(x) * (x)

void func()
{

}

int main()
{
	std::cout << SUM(10, 20) << std::endl;
	// std::cout << x + y << std::endl;		// 함수를 찾는 점프가 안 일어남 // 그 자리에서 바뀌어서 사용
	std::cout << SQUARE(10 + 1) << std::endl;		// 10 + 1 * 10 + 1 = 21

	std::cout << SQUARE1(10 + 1) << std::endl;		// (10 + 1) * (10 + 1) = 121


	return 0;
}