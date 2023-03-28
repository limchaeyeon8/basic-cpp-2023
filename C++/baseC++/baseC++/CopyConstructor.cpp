#include <iostream>

class Myclass
{
	int num;
public:
	Myclass(int n) : num(n)		// 생성자 , 콜론 초기화
	{
		std::cout << "생성자 호출" << std::endl;
	}
	Myclass(Myclass& other)
	{
		std::cout << "복사생성자 호출" << std::endl;
		num = other.num;
	}

	void getData()
	{
		std::cout << num << std::endl;
	}
};


int main(void)
{
	Myclass m1(10);		// 객체 생성
	Myclass m2 = m1;	// 복사생성자 호출	// int num2 = num1
	Myclass m3(m2);		// 복사생성자 호출

	m1.getData();
	m2.getData();
	m3.getData();


	return 0;
}