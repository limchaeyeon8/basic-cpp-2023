// ������ �Ҵ� / �����Ҵ� / �Ҹ���
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char *name;	// ������ ����
	int id;
	int age;
public:		// �޼ҵ� �ʱ�ȭ, �ܺ�����
	Human(const char *Aname, int Aaid, int Aage)	// ������
	{
		name = new char[strlen(Aname) + 1]; // �޸� �����Ҵ� ���� Ÿ�� ũ�� �ο� - ������: strlen() // �����Ϳ� ����
		strcpy(name, Aname); 
		id = Aaid;
		age = Aage;
	}

	~Human()		// �Ҹ���(���ϵǸ� ��ü�Ҹ�)
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


	return 0;
}