#include <iostream>

#define SUM(x, y)	x + y		// ��ũ�� �Լ�
#define SQUARE(x)	x * x
#define SQUARE1(x)	(x) * (x)

void func()
{

}

int main()
{
	std::cout << SUM(10, 20) << std::endl;
	// std::cout << x + y << std::endl;		// �Լ��� ã�� ������ �� �Ͼ // �� �ڸ����� �ٲ� ���
	std::cout << SQUARE(10 + 1) << std::endl;		// 10 + 1 * 10 + 1 = 21

	std::cout << SQUARE1(10 + 1) << std::endl;		// (10 + 1) * (10 + 1) = 121


	return 0;
}