#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	int age;
	char name[50];

public:
	Person(int myage, const char* myname) : age(myage)
	{
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}

	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old!" << endl;
	}
};

class UnivStudent : public Person
{
private:
	char major[50];

public:
	UnivStudent(const char* myname, int myage, const char* mymajor)
		: Person(myage, myname)		// 상속 받은 부모클래스의 생성자 호출
	{
		strcpy(major, mymajor);
	}

	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My Major is " << major << endl << endl;
	}
};

int main(void)
{
	UnivStudent ustd1("Lim", 23, "Embedded IT");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yeon", 23, "IT");
	ustd2.WhoAreYou();


	return 0;
}