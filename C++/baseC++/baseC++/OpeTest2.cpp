// 연산자 오버로딩2

#include <iostream>
using namespace std;

class Myclass
{
private:
	int value;	// 멤버변수
public:
	Myclass(int avalue) : value(avalue) { }	// 생성자, 콜론 초기화

	Myclass operator+(const Myclass &other)	const	// 더하기 구현 // 매개변수 --- 객체(참조형태로 사용해야 함) // 객체형태로 쓰면 무한반복,, // 반환형태 --- 객체
	{
		return Myclass(value + other.value);
	}

	void print()
	{
		std::cout << value<< std::endl;
	}
};

int main()
{
	Myclass a(2023);
	a.print();

	Myclass b(a);
	b.print();

	Myclass c = b;
	c.print();

	Myclass d = a + b + c;		// 더하기 연산자는 객체 덧셈 지원하지 않음
	d.print();

	return 0;
}