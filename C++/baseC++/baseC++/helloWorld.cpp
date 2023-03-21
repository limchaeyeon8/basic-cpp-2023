#include <iostream>

int main(void)		// 함수머리 = 출력 함수이름(입력) // (void) - 비어있는, 생략가능
					// 정수 int, 문자 char
{					// 함수시작	(함수 몸체)

	int num = 20;	// 변수선언 // 지역변수; 중괄호 닫힐 때 소멸 // 대입연산자(왼쪽에<-오른쪽 값 넣음)
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;


	return 0;		// 리턴 // 함수머리 출력 위치에 void; 없음-> 리턴 필요없음
}					//함수 끝