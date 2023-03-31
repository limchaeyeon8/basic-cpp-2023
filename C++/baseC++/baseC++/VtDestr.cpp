#include <iostream>
using namespace std;

class CTest
{
private:
	int num;
public:
	CTest(int n) : num(n)
	{
		cout << num << "\nCTest Constructor\n" << endl;
	}

	~CTest()
	{
		cout << "CTest destructor\n" << endl;
	}

	/////////////////
	void func()
	{
		cout << "CTest func()" << endl;
	}
	/////////////////�����Լ�
	virtual void vfunc()
	{
		cout << "CTest vfunc()" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int snum;
public:
	CTestSub(int n1, int n2) : CTest(n1), snum(n2)
	{
		cout << snum << "\nCTestSub constructor\n" << endl;
	}
	
	virtual ~CTestSub()
	{
		cout << "CTestSub destructor\n" << endl;
	}

	////////////////�������̵�(������)
	void vfunc()
	{
		cout << "CTestSub func()" << endl;

	}
};


int main()
{
	CTest ct(10);
	cout << "==============" << endl;
	CTestSub ts(2, 20);
	cout << "==============" << endl;

	CTest* ps = new CTestSub(3, 33);		// ps - ����Ŭ������ ������

	delete ps;				// ���� Ŭ���� �Ҹ��� ȣ��� // --���� ����� ����Ŭ���� �Ҹ��ڴ� ȣ��x 
			// ����Ŭ���� �Ҹ��� �տ� virtual�� �Է��ϸ� ����Ҹ��ڰ� ������� -> �޸� �Ҵ� ����


	return 0;
}
