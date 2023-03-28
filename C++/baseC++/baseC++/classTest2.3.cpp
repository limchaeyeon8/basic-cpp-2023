// 힙영역 할당 / 동적할당 / 소멸자
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char *name;	// 포인터 선언
	int id;
	int age;
public:		// 메소드 초기화, 외부접근
	Human(const char *Aname, int Aaid, int Aage)	// 생성자
	{
		name = new char[strlen(Aname) + 1]; // 메모리 동적할당 받을 타입 크기 부여 - 유동적: strlen() // 포인터에 저장
		strcpy(name, Aname); 
		id = Aaid;
		age = Aage;
	}

	~Human()		// 소멸자(리턴되면 객체소멸)
	{
		// 동적할당 해제
		delete name;
	}

	void getData()
	{
		cout << age << "살 " << name << "은 " << id << "학번 hwa-seok이다" << endl;

	}

};

int main()
{
	// 인수 3개 동시에 주면서 생성
	Human h("임채연", 19, 23);

	h.getData();


	return 0;
}