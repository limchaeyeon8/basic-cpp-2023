#include <iostream>
using namespace std;

class MyCalc
{
private:
	int num1;
	int num2;

public:
	// »ı¼ºÀÚ·Î ÃÊ±âÈ­ ÇÏ±â(Äİ·Ğ ÃÊ±âÈ­)
	MyCalc(int n1, int n2);

	void add();
	void sub();
	void mul();
	void div();
};

MyCalc::MyCalc(int n1, int n2)
{
	num1 = n1;
	num2 = n2;
}

void MyCalc::add()
{
	int resAdd = num1 + num2;
	cout << resAdd << endl;
}

void MyCalc::sub()
{
	int resSub = num1 - num2;
	cout << resSub << endl;
}

void MyCalc::mul()
{
	int resMul = num1 * num2;
	cout << resMul << endl;
}

void MyCalc::div()
{
	int resDiv = num1 / num2;
	cout << resDiv << endl;
}

int main()
{

	MyCalc nu(-12, 25);

	printf("µ¡¼À: ");
	nu.add();

	printf("»¬¼À: ");
	nu.sub();	

	printf("°ö¼À: ");
	nu.mul();
	
	printf("³ª´°¼À: ");
	nu.div();

	return 0;
}