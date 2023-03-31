// �̸����� �����Ҵ�
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int birthday;
public:
	Person(const char* aname, int abday)
	{
		int len = strlen(aname) + 1;
		name = new char[len];

		strcpy(name, aname);
		birthday = abday;
	}

	Person(const Person& copy) : birthday(copy.birthday)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}

	~Person()
	{
		delete[] name;
		cout << "�Ҹ�" << endl;

	}

	void showPerson()
	{
		std::cout << name << "�� ������� : " << birthday << std::endl;
	}
};

int main()
{
	Person p1("��ä��", 20010220);
	p1.showPerson();

	Person p2(p1);
	p2.showPerson();

	Person p3 = p2;
	p3.showPerson();

	Person p4("������", 19990909);
	p4 = p1;
	p4.showPerson();



	return 0;

}