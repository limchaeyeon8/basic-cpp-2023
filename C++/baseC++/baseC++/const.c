#include <stdio.h>			// c�ҽ��� �������

int main()
{
//	int num = 10;
//	printf("num1 : %d\n", num);

//	num = 20;
//	printf("num2 : %d\n", num);

	const int num = 20;		// ���ȭ ���ÿ� �ʱ�ȭ
	printf("num: %d\n", num);

//	num = 20;

/*
	int* p = &num;	// �ּ� ������ �� �ִ� * ������ ���� / & �ּҿ�����
	printf("p�� ����� ��: %p\n", p);
	printf("p�� �����ϴ� ��: %d\n", *p);
	*p = 20;		// ���� ����
*/

	const int num = 10;
	//num = 100;
	printf("num: %d\n", num);

	int* p = &num;
	*p = 100;
	printf("num: %d\n", num);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1;				// ������ ���ȭ
	printf("pa: %p\n", pa);
	pa = &num2;
	printf("���� pa: %p\n", pa);

	//*pa = 50;

	int* const pb = &num1;				// ������ ������ ���ȭ
	//pb = &num2;
	*pb = 70;								// �����Ͱ� ���� ����


	return 0;
}