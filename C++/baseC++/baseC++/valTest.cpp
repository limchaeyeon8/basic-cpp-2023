// ����; ���� ������ �� �ִ� ������ ����� �����صδٰ� ����� ���� �ٲ� �� �ֵ��� ��

#include <stdio.h>

int main()
{
	/*
	int num = 10;	// �ʱ�ȭ
	int num1;		// ���� ����
	num1 = 20;		// ����
	num = 30;

	printf("int�� ũ��: %d\n", sizeof(int));

	char ch;		// ����Ÿ��
	printf("char�� ũ��: %d\n", sizeof(char));

	double d = 3.14;
	printf("double�� ũ��: %d\n", sizeof(double));
	*/

	char ch = 0x7f;			// 0x -> 16���� : 0~9, A((10)), B((11)), C((12)), D((13)), E((14)), F((15)) ���
							// 2����(���̳ʸ�ǥ���) : 0b 0111 1111 (8bit�� ����)	-�Ϻ�-	//	8 4 2 1 
	unsigned char ch1 = 0x7f;		// unsigned: �ڷ����� unsigned�� �ٰ� �Ǹ� ��ȣ�� ���ٴ� �ǹ�
									// ���� ��ȣ(-)�� ������ �ʰ� 0 �̻��� ������ ǥ���ϰڴٴ� �ǹ� // �ڷ����� ��Ʈ �� �ϳ��� ��Ʈ�� ��ȣ�� ��Ÿ��
									// - �̰� ������ char ch = 0x7f; �տ� signed �������ִ� ��
	printf("ch: %x \t ch: %d\n", ch, ch);
	printf("ch1: %x \t ch1: %d\n", ch1, ch1);

	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f;
	printf("ch2: %x \t ch2: %d\n", ch2, ch2);
	printf("uch2: %x \t uch2: %d\n", uch2, uch2);


	return 0;
}