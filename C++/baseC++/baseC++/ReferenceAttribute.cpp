#include <iostream>
using namespace std;

class First
{
public:
	void FirstFunc()
	{
		cout << "FirstFunc()\n" << endl;
	}
	virtual void SimpleFunc()
	{
		cout << "First's SimpleFunc()\n" << endl;

	}
};

class Second : public First
{
public:
	void SecondFunc()
	{
		cout << "SecondFunc()\n" << endl;
	}
	virtual void SimpleFunc()
	{
		cout << "Second's SimpleFunc()\n" << endl;

	}
};
class Third : public Second
{
public:
	void ThirdFunc()
	{
		cout << "ThirdFunc()\n" << endl;
	}
	virtual void SimpleFunc()
	{
		cout << "Third's SimpleFunc()\n" << endl;

	}
};

int main(void)
{
	Third obj;
	obj.FirstFunc();
	obj.SecondFunc();
	obj.ThirdFunc();
	obj.SimpleFunc();

	Second& sref = obj;
	sref.FirstFunc();
	sref.SecondFunc();
	sref.SimpleFunc();

	First& fref = obj;
	fref.FirstFunc();
	fref.SimpleFunc();

	return 0;
}
