#pragma warning(disable : 4996)

#include <iostream>
#include <cstring>
using namespace std;


class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;			// 마지막에 null 넣기 위해
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	~Person()
	{
		delete []name;
		cout << "called deftructor!" << endl;
	}
};


int main(void)
{
	Person man1("Lim chae yeon", 23);
	Person man2("Lee joo hyeon", 25);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}