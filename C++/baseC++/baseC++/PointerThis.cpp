#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "num = " << num << ", ";
		cout << "address = " << this << endl;
	}

	void ShowSimpleData()
	{
		cout << num << endl;
	}

	SoSimple* GetThisPointer()
	{
		return this;
	}
};

int main(void)
{
	SoSimple sim1(100);
	SoSimple* prt1 = sim1.GetThisPointer();		// sim1 按眉狼 林家 蔼 历厘
	cout << prt1 << ", ";
	prt1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* prt2 = sim2.GetThisPointer();		// sim2 按眉狼 林家 蔼 历厘
	cout << prt2 << ", ";
	prt2->ShowSimpleData();

	return 0;
}