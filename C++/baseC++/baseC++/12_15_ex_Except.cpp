// ��Ÿ�ӿ���(0���� ���� ���) ���� ó��

#include <iostream>
using namespace std;


int main()
{
	int a, b, c, d;
	cout << "�������� �Է��ϼ���: " << endl;
	cin >> a;
	cout << "������ �Է��ϼ���: " << endl;
	cin >> b;

	try
	{
		if (b == 0) throw b;		// ***** ���ܰ� �߻��Ǹ�

		c = a / b;
		cout << "��: " << c << endl;
		d = a % b;
		cout << "������: " << d << endl;
	}
	
	catch (int ex)
	{
		cout << ex << "�� ���� �� �����ϴ�. Exception Occured" << endl;
	}

	cout << "���ܰ� �߻��ص� ���� ����" << endl;

	return 0;
}