#include <iostream>
using namespace std;

class First
{
private:
	char* strOne;
public:
	First(const char * str)
	{
		strOne = new char[strlen(str) + 1];
	}

	virtual ~First()
	{
		cout << "~First()\n" << endl;
		delete[]strOne;
	}
};


class Second : public First
{
private:
	char* strTwo;
public:
	Second(const char* str1, char * str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}

	virtual ~Second()
	{
		cout << "~Second()\n" << endl;
		delete[]strTwo;
	}
};


int main(void)
{
	First* ptr = new Second("simple", "complex");
	delete ptr;

	return 0;
}