// 배열인데 타입이 객체

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char *name;
	int id;
	int age;
public:
	Human(const char* Aname, int Aaid, int Aage)
	{
		name = new char[strlen(Aname) + 1];
		strcpy(name, Aname);
		id = Aaid;
		age = Aage;
	}

	~Human()
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

	Human harr[3] = { Human("임채연", 19, 23), Human("김영희", 16, 29), Human("김철수", 18, 25) };		// 클래스가 자료형// {} 안에 디폴트생성자 형태로 호출

	harr[0].getData();
	harr[1].getData();
	harr[2].getData();

	return 0;
}