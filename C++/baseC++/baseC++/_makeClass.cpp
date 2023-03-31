#include <iostream>
using namespace std;

class Person
{
private:
	const char* name;
	int birthday;
public:
	Person(const char* aname = nullptr, int abday = 0)
		: birthday(abday), name(aname) { }

	void showPerson()
	{
		cout << name << "�� ������� : " << birthday << endl;
	}
};

int main()
{
	Person p1("��ä��", 20010220);
	p1.showPerson();

	Person p2(p1);
	p2.showPerson();

	Person p3 = p2;
	p3.showPerson();


	return 0;

}