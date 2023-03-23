#include <stdio.h>			// c소스의 헤더파일

int main()
{
//	int num = 10;
//	printf("num1 : %d\n", num);

//	num = 20;
//	printf("num2 : %d\n", num);

	const int num = 20;		// 상수화 동시에 초기화
	printf("num: %d\n", num);

//	num = 20;

/*
	int* p = &num;	// 주소 저장할 수 있는 * 포인터 변수 / & 주소연산자
	printf("p에 저장된 값: %p\n", p);
	printf("p가 참조하는 값: %d\n", *p);
	*p = 20;		// 간접 참조
*/

	const int num = 10;
	//num = 100;
	printf("num: %d\n", num);

	int* p = &num;
	*p = 100;
	printf("num: %d\n", num);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1;				// 데이터 상수화
	printf("pa: %p\n", pa);
	pa = &num2;
	printf("변경 pa: %p\n", pa);

	//*pa = 50;

	int* const pb = &num1;				// 포인터 변수의 상수화
	//pb = &num2;
	*pb = 70;								// 데이터값 변경 가능


	return 0;
}