// ����� ���� �ڷ����� ����ü (C type)

#include <stdio.h>

struct human
{
	char name[20];				// ����ü ��������� ����� ���� ����ü�������� �� �ʱ�ȭ������
	int age;					// �޸��Ҵ� �� �� ���� -> ����ü ���� ���� �� ũ�⸸ŭ �Ҵ�
};			// ������� �ڷ����� ������ ����� ����ϸ� ��

int main()
{
	//char h;
	struct human h = { "��ä��", 23 };		// ����ü human Ÿ���� ����ü ���� h ����
	
	printf("�̸�: %s\n", h.name);
	printf("����: %d\n", h.age);


	return 0;
}