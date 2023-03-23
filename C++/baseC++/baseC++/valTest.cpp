// 변수; 변수 저장할 수 있는 공간을 만들어 저장해두다가 저장된 값을 바꿀 수 있도록 함

#include <stdio.h>

int main()
{
	/*
	int num = 10;	// 초기화
	int num1;		// 변수 선언
	num1 = 20;		// 대입
	num = 30;

	printf("int의 크기: %d\n", sizeof(int));

	char ch;		// 문자타입
	printf("char의 크기: %d\n", sizeof(char));

	double d = 3.14;
	printf("double의 크기: %d\n", sizeof(double));
	*/

	char ch = 0x7f;			// 0x -> 16진법 : 0~9, A((10)), B((11)), C((12)), D((13)), E((14)), F((15)) 사용
							// 2진법(바이너리표기법) : 0b 0111 1111 (8bit로 구성)	-니블-	//	8 4 2 1 
	unsigned char ch1 = 0x7f;		// unsigned: 자료형에 unsigned가 붙게 되면 부호가 없다는 의미
									// 음의 부호(-)를 붙이지 않고 0 이상의 값만을 표현하겠다는 의미 // 자료형의 비트 중 하나의 비트가 부호를 나타냄
									// - 이게 없으면 char ch = 0x7f; 앞에 signed 생략돼있는 것
	printf("ch: %x \t ch: %d\n", ch, ch);
	printf("ch1: %x \t ch1: %d\n", ch1, ch1);

	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f;
	printf("ch2: %x \t ch2: %d\n", ch2, ch2);
	printf("uch2: %x \t uch2: %d\n", uch2, uch2);


	return 0;
}