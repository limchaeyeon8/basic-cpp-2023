// ��Ÿ�ӿ���(0���� ���� ���) ���� ó��

#include <iostream>
using namespace std;

//
void divide(int a, int b)
{
	int c, d;

	if (b == 0) throw b;		// ***** ���ܰ� �߻�, ������

	c = a / b;
	cout << "��: " << c << endl;
	d = a % b;
	cout << "������: " << d << "\n" << endl;
}

int main()
{
	try
	{
		divide(10, 3);
		divide(100, 5);
		divide(3, 0);
		divide(100, 20);
	}

	catch (int ex)				// �ް�
	{
		cout << ex << "�� ���� �� �����ϴ�. Exception Occured" << endl;
	}

	cout << "���ܰ� �߻��ص� ���� ����" << endl;

	return 0;
}