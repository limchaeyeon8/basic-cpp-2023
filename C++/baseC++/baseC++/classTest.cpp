#include <iostream>
using namespace std;


// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ� - ����
class Myclass
{
	// ������� ; �Ӽ�
	// ���������� ���� == private:
private:
	int age;
	char name[10];
	char id;

	// ����Լ� (= �޼ҵ�) ; ���
	// �ܺ������� ���� public ����ؾ� - ����Լ��� ���� ��������� �����ϴ� ��� �����ϴ� ���� Ŭ����
public:
	void set(int Aage, const char* Aname, char Aid)
	{
		age = Aage;
		strcpy_s(name, 10, Aname);		// strcpy_s -> ũ��� �߰��� 
		id = Aid;
	}
	void get()
	{
		cout << age << ' ' << name << ' ' << id << endl;
	}

};


int main(void)
{
	Myclass s;

	s.set(23, "��ä��", '19');
	s.get();

	return 0;
}