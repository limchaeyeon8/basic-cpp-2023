#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Person
{
private:
	char name[30];	// ���ؿ� �Ҵ�
	int age;
public:
	Person(const char*, int);		// ������ Ư¡ - Ŭ������� ���� / ��� ���� �Է� ���� / ���� Ÿ�Ը� ��� �� / �ܺο��� 
	void getData();
};

class Student	:	public Person	// �θ�Ŭ���� �Ӽ� ���
{
private:
	int studentId;
public:
	Student(const char*, int, int);			// ������ ȣ�� / 3���� �Է°�	// ��Ӱ��迡�� �Լ�(�޼ҵ�)�̸� ������ �������̵�(������), ��Ӱ��� �ƴ� �� �Լ�(�޼ҵ�) �̸��� ���� �����ε�(��������) 
	void showData();
};

/////////////
Person::Person(const char* aname, int aage) : age(aage)
{
	strcpy(name, aname);
}


void Person::getData()
{
	cout << "�̸��� " << name << endl;
	cout << "���̴� " << age << endl;
}

/////////////
Student::Student(const char* aname, int aage, int astudentId)
	: Person(aname, aage), studentId(astudentId)
{   }

void Student::showData()
{
	getData();
	cout << "�й��� " << studentId << endl;
}

int main(void)
{
	Student st("��ä��", 23, 20191845);
	st.showData();

	return 0;
}