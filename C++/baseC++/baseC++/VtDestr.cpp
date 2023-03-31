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
	/////////////////가상함수
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

	////////////////오버라이딩(재정의)
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

	CTest* ps = new CTestSub(3, 33);		// ps - 기초클래스의 포인터

	delete ps;				// 기초 클래스 소멸자 호출됨 // --가상 사용한 서브클래스 소멸자는 호출x 
			// 기초클래스 소멸자 앞에 virtual을 입력하면 가상소멸자가 만들어짐 -> 메모리 할당 해제


	return 0;
}
