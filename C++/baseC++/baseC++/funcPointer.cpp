#include <iostream>

int add(int n1, int n2)
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	return n1 - n2;
}

int main()
{
	int res;
	// 출력 함수이름 (입력)
	int (*fp)(int, int);			// 함수포인터 선언 // 함수포인터라는 의미의 fp
	fp = add;						// 함수 add를 fp를 통해 사용 가능
	res = fp(10, 20);
	printf("%d\n", res);

	fp = sub;
	res = fp(10, 9);
	printf("%d\n", res);


	printf("%p\n", add);			// 주소값 출력

	return 0;
}