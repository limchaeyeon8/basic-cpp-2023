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
		int len = strlen(myname) + 1;			// �������� null �ֱ� ����
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
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