// �迭�ε� Ÿ���� ��ü

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char *name;
	int id;
	int age;
public:
	Human(const char* Aname, int Aaid, int Aage)
	{
		name = new char[strlen(Aname) + 1];
		strcpy(name, Aname);
		id = Aaid;
		age = Aage;
	}

	~Human()
	{
		// �����Ҵ� ����
		delete name;
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

	Human harr[3] = { Human("��ä��", 19, 23), Human("�迵��", 16, 29), Human("��ö��", 18, 25) };		// Ŭ������ �ڷ���// {} �ȿ� ����Ʈ������ ���·� ȣ��

	harr[0].getData();
	harr[1].getData();
	harr[2].getData();

	return 0;
}