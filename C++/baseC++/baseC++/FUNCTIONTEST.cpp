#include <iostream>

/*
void addF(void)	// ����� ���� �Լ�
{
	int A = 10;
	int B = 20;
	int res;
	res = A + B;

	std::cout << "res : " << res << std::endl;
}
*/

/*
void add(int a, int b)	// �Է� �ִ� �Լ�(���x)	// �Է��� ����� ��� - �Ű������� ����
{
	int res = a + b;

	std::cout << "res : " << res << std::endl;
}
*/

int addddd(int a, int b)	// ����� �ִ� �Լ�		// ���O - return������ �ۼ�
{
	int res = a + b;
	return res;
	
}

int main()
{
		
	// addF();		// ȣ��

	/*
	int n1 = 10;
	int n2 = 20;
	add(n1, n2);		// ȣ��	// *���μ�; �Է����� �� ��������(n1, n2)
	*/

	int n1 = 10;
	int n2 = 20;

	int res = addddd(n1, n2);				// ���ϵǴ� ���� �����ؼ� ���

	std::cout << "res : " << res << std::endl;
}