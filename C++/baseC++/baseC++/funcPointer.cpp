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
	// ��� �Լ��̸� (�Է�)
	int (*fp)(int, int);			// �Լ������� ���� // �Լ������Ͷ�� �ǹ��� fp
	fp = add;						// �Լ� add�� fp�� ���� ��� ����
	res = fp(10, 20);
	printf("%d\n", res);

	fp = sub;
	res = fp(10, 9);
	printf("%d\n", res);


	printf("%p\n", add);			// �ּҰ� ���

	return 0;
}