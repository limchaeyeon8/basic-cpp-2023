#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Person
{
private:
	char name[30];	// 스텍에 할당
	int age;
public:
	Person(const char*, int);		// 생성자 특징 - 클래스명과 같음 / 출력 없고 입력 받음 / 여긴 타입만 적어도 됨 / 외부에서 
	void getData();
};

class Student	:	public Person	// 부모클래스 속성 상속
{
private:
	int studentId;
public:
	Student(const char*, int, int);			// 생성자 호출 / 3개의 입력값	// 상속관계에서 함수(메소드)이름 같으면 오버라이딩(재정의), 상속관계 아닐 때 함수(메소드) 이름이 같음 오버로딩(다중정의) 
	void showData();
};

/////////////
Person::Person(const char* aname, int aage) : age(aage)
{
	strcpy(name, aname);
}


void Person::getData()
{
	cout << "이름은 " << name << endl;
	cout << "나이는 " << age << endl;
}

/////////////
Student::Student(const char* aname, int aage, int astudentId)
	: Person(aname, aage), studentId(astudentId)
{   }

void Student::showData()
{
	getData();
	cout << "학번은 " << studentId << endl;
}

int main(void)
{
	Student st("임채연", 23, 20191845);
	st.showData();

	return 0;
}