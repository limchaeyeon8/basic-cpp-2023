#include <iostream>
using namespace std;

class Human
{
private:
	char name[20];
	int id;
	int age;
public:		// �޼ҵ� �ʱ�ȭ, �ܺ�����
	Human(const char Aname[20], int Aaid, int Aage)	// ������
	{
		strcpy_s(name, Aname); // ���⼭ name = "ȫ�浿" (X) // �迭�� ����� ���ÿ� �ʱ�ȭ ���� // strcpy ���
				id = Aaid;
				age = Aage;
	}

	void getData()
	{
		cout << age << "�� " << name << "�� " << id << "�й� hwa-seok�̴�" << endl;

	}

};

int main()
{
	// �μ� 3�� ���ÿ� �ָ鼭 ����
	Human h("��ä��", 19, 23);

	h.getData();


	return 0;
}