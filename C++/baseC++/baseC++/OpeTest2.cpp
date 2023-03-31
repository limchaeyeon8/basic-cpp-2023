// ������ �����ε�2

#include <iostream>
using namespace std;

class Myclass
{
private:
	int value;	// �������
public:
	Myclass(int avalue) : value(avalue) { }	// ������, �ݷ� �ʱ�ȭ

	Myclass operator+(const Myclass &other)	const	// ���ϱ� ���� // �Ű����� --- ��ü(�������·� ����ؾ� ��) // ��ü���·� ���� ���ѹݺ�,, // ��ȯ���� --- ��ü
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

	Myclass d = a + b + c;		// ���ϱ� �����ڴ� ��ü ���� �������� ����
	d.print();

	return 0;
}