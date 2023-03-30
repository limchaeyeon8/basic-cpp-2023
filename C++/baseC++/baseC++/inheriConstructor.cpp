#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class Super
{
public:
	Super()
	{
		cout << "Super()" << endl;
	}
	~Super()
	{
		cout << "~Super()" << endl;
	}
};


class Sub : public Super	// 惑加
{
public:
	Sub()
	{
		cout << "Sub()" << endl;
	}
	~Sub()
	{
		cout << "Sub()" << endl;
	}
};


int main()
{
	cout << "---Start---" << endl;
	Sub obj;	// 按眉 积己
	cout << "---Stop---" << endl;



	return 0;
}