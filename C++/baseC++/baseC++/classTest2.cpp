#include <iostream>
using namespace std;

class Human
{
private:
	char name[20];
	int id;
	int age;
public:		// �޼ҵ� �ʱ�ȭ, �ܺ�����
	void setData(const char Aname[20], int Aaid, int Aage)
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
	Human h;		// Human ��ü ����
	h.setData("��ä��", 19, 23);
	h.getData();


	return 0;
}