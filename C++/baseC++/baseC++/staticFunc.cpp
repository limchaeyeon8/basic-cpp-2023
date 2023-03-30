#include <iostream>
using namespace std;

class StaticTest {
private:
	static int a;			// 멤버변수의 static
	int b;
public:
	StaticTest();
	static void setData(int aa);
	void print();
};

int StaticTest::a = 10;		// static 멤버변수 초기화
StaticTest::StaticTest()
{
	this->b = 20;
}

void StaticTest::setData(int aa)		// setData()소속은 StaticTest
{
	//this->a = 30;					// this 객체 가리킴 / static 붙은 건 클래스 소속(객체 x) 에러
	a = aa;
}

void StaticTest::print()
{
	std::cout << "a: " << a << ", " << "b: " << b << std::endl;
}

int main()
{
	StaticTest s1, s2;
	s1.print();
	s2.print();
	
	s1.setData(30);
	s1.print();
	s2.print();

	StaticTest::setData(100);
	s1.print();
	s2.print();


	return 0;
}