#include <iostream>
using namespace std;

class Human
{
private:
	char name[20];
	int id;
	int age;
public:		// 메소드 초기화, 외부접근
	void setData(const char Aname[20], int Aaid, int Aage)
	{
		strcpy_s(name, Aname); // 여기서 name = "홍길동" (X) // 배열은 선언과 동시에 초기화 가능 // strcpy 사용
		id = Aaid;
		age = Aage;
	}

	void getData()
	{
		cout << age << "살 " << name << "은 " << id << "학번 hwa-seok이다" << endl;

	}

};

int main()
{
	Human h;		// Human 객체 생성
	h.setData("임채연", 19, 23);
	h.getData();


	return 0;
}