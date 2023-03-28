#include <iostream>
using namespace std;

class ConstSome
{
public:
	const int val;
	ConstSome (int n) : val (n)	{}		// ��� �������
	void printval()
	{
		std::cout << val << std::endl;
	}
};

class RefSome
{
public:
	int& ref;
	RefSome (int n) : ref (n)	{}		// ���� �������
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
	Position pos;						// ��ü �������
	ObjSome(int ax, int ay) : pos(ax, ay) {}	// ��ü => �ݷ� �ʱ�ȭ ((pos�� ����))
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