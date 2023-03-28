#include <iostream>
using namespace std;

class ConstSome
{
public:
	const int val;
	ConstSome (int n) : val (n)	{}		// 상수 멤버변수
	void printval()
	{
		std::cout << val << std::endl;
	}
};

class RefSome
{
public:
	int& ref;
	RefSome (int n) : ref (n)	{}		// 참조 멤버변수
	void printval()
	{
		std::cout << ref << std::endl;
	}
};

class Position
{
public:
	int x, y;
	Position(int ax, int ay)
	{
		x = ax;
		y = ay;
	}
};

class ObjSome
{
public:
	Position pos;						// 객체 멤버변수
	ObjSome(int ax, int ay) : pos(ax, ay) {}	// 객체 => 콜론 초기화 ((pos에 저장))
	void printfval()
	{
		std::cout << pos.x << " " << pos.y << std::endl;
	}

};

int main(void)
{
	ConstSome c(10);
	c.printval();

	int n = 20;
	RefSome r(n);
	r.printval();

	ObjSome o(10, 20);
	o.printfval();

	return 0;
}