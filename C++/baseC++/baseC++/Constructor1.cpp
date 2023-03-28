#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;

public:

	// 생성자 오버로딩
	SimpleClass()
	{
		printf("default 생성자\n");
		num1 = 0;
		num2 = 0;
	}

	SimpleClass(int n)
	{
		printf("인수 하나 갖는 생성자\n");
		num1 = n;
		num2 = 0;
	}

	SimpleClass(int n1, int n2)
	{
		printf("인수 두 개 갖는 생성자\n");
		num1 = n1;
		num2 = n2;
	}

	/*
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}
	*/

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}

};

int main(void)
{
	SimpleClass sc1;		// default 생성자 호출
	sc1.ShowData();

	SimpleClass sc2(100);	// 인자 하나 전달
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();

	return 0;
}
