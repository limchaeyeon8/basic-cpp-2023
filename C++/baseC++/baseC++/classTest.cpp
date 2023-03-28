#include <iostream>
using namespace std;


// 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다 - 은닉
class Myclass
{
	// 멤버변수 ; 속성
	// 접근지시자 없음 == private:
private:
	int age;
	char name[10];
	char id;

	// 멤버함수 (= 메소드) ; 기능
	// 외부접근을 위해 public 사용해야 - 멤버함수를 통해 멤버변수에 접근하는 기능 제공하는 것이 클래스
public:
	void set(int Aage, const char* Aname, char Aid)
	{
		age = Aage;
		strcpy_s(name, 10, Aname);		// strcpy_s -> 크기는 중간에 
		id = Aid;
	}
	void get()
	{
		cout << age << ' ' << name << ' ' << id << endl;
	}

};


int main(void)
{
	Myclass s;

	s.set(23, "임채연", '19');
	s.get();

	return 0;
}