// 연산자 오버로딩

#include <iostream>
using namespace std;

class Myclass
{
	int num1, num2;
	const char* name;
public:
	Myclass(int anum1 = 0, int anum2 = 0, const char* aname = nullptr)
		: num1(anum1), num2(anum2), name(aname) { }

	void showData()
	{
		cout << num1 << ", " << num2 << ", " << name << endl;
	}
};

int main()
{
	Myclass m(2001, 220, "임채연");
	m.showData();

	Myclass cm(m);		// cm = m
	m.showData();


	Myclass cm1;
	cm1 = cm;
	cm.showData();


	return 0;
}