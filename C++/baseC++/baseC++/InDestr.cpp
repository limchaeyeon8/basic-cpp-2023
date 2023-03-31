#include <iostream>
using namespace std;

class CTest
{
private:
	int num;
public:
	CTest(int n)		//������, �ʱ�ȭ
	{
		num = n;
		std::cout << num << "\nCTest Constructor\n" << std::endl;
	}

	~CTest()			// �Է¹�ȯ �� ���� // ����Ŭ���� �Ҹ���
	{
		std::cout << "CTest Destructor\n"<< std::endl;
	}
};

class CTestSub : public CTest
{
private:
	int subn;
public:
	CTestSub(int sn, int n) : CTest(sn)
	{
		subn = n;
		std::cout << subn << "\nCTestSub Constructor\n" << std::endl;

	}

	~CTestSub()			// ����Ŭ���� �Ҹ���
	{
		std::cout << "CTestSub Destructor\n" << std::endl;

	}

};


int main()
{
	CTest ct(10);
	std::cout << "==================" << std::endl;

	CTestSub ts(1, 2);

	return 0;
}
