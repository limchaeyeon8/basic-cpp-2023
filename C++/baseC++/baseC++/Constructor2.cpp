#include <iostream>
using namespace std;


// 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다 - 은닉
class Myclass
{
private:
	int age;
	char name[10];
	char id[3];

public:
	Myclass(int Aage, const char* Aname, const char* Aid);		// 생성자 원형

	void getData();					// 메소드 원형(선언)

};


Myclass::Myclass(int Aage, const char* Aname, const char* Aid)		// 생성자 정의
{
	printf("생성자 호출\n");
	age = Aage;
	strcpy_s(name, 10, Aname);
	strcpy_s(id, 3, Aid);
}

void Myclass::getData()
{
	cout << age << "살 " << name << "은 " << id << "학번 hwa-seok이다" << endl;
}

int main(void)
{
	Myclass s (23, "임채연", "19");
	s.getData();
		
	return 0;
}