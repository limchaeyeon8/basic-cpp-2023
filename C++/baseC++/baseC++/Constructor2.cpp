#include <iostream>
using namespace std;


// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ� - ����
class Myclass
{
private:
	int age;
	char name[10];
	char id[3];

public:
	Myclass(int Aage, const char* Aname, const char* Aid);		// ������ ����

	void getData();					// �޼ҵ� ����(����)

};


Myclass::Myclass(int Aage, const char* Aname, const char* Aid)		// ������ ����
{
	printf("������ ȣ��\n");
	age = Aage;
	strcpy_s(name, 10, Aname);
	strcpy_s(id, 3, Aid);
}

void Myclass::getData()
{
	cout << age << "�� " << name << "�� " << id << "�й� hwa-seok�̴�" << endl;
}

int main(void)
{
	Myclass s (23, "��ä��", "19");
	s.getData();
		
	return 0;
}