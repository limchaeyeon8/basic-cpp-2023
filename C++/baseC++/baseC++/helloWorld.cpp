#include <iostream>

int main(void)		// �Լ��Ӹ� = ��� �Լ��̸�(�Է�) // (void) - ����ִ�, ��������
					// ���� int, ���� char
{					// �Լ�����	(�Լ� ��ü)

	int num = 20;	// �������� // ��������; �߰�ȣ ���� �� �Ҹ� // ���Կ�����(���ʿ�<-������ �� ����)
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;


	return 0;		// ���� // �Լ��Ӹ� ��� ��ġ�� void; ����-> ���� �ʿ����
}					//�Լ� ��