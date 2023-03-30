#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}

	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);
	// obj.AddNum(20);		����Լ� AddNum�� const �Լ��� �ƴϱ� ������ ȣ�� �Ұ�
	obj.ShowData();		 // ����Լ� ShowData�� const �Լ��̱� ������ const ��ü�� ������� ȣ�� ����

	return 0;
}