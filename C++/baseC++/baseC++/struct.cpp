// 사용자 정의 자료형인 구조체 (C type)

#include <stdio.h>

struct human
{
	char name[20];				// 구조체 멤버변수에 저장될 값은 구조체변수선언 시 초기화시켜줌
	int age;					// 메모리할당 안 된 상태 -> 구조체 변수 선언 시 크기만큼 할당
};			// 만들어진 자료형은 변수를 만들어 사용하면 됨

int main()
{
	//char h;
	struct human h = { "임채연", 23 };		// 구조체 human 타입의 구조체 변수 h 선언
	
	printf("이름: %s\n", h.name);
	printf("나이: %d\n", h.age);


	return 0;
}