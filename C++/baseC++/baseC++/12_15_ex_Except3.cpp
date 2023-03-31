// 런타임에러(0으로 나눌 경우) 예외 처리

#include <iostream>
using namespace std;

//
void divide(int a, int b)
{
	int c, d;

	try
	{
		if (b == 0) throw b;		// ***** 예외가 발생, 던지고

		c = a / b;
		cout << "몫: " << c << endl;
		d = a % b;
		cout << "나머지: " << d << "\n" << endl;
	}

	catch (int ex)				// 받고
	{
		cout << ex << "로 나눌 수 없습니다. Exception Occured\n" << endl;
	}
	
}

int main()
{
	divide(10, 3);
	divide(100, 5);
	divide(3, 0);
	divide(100, 20);

	cout << "예외가 발생해도 정상 종료\n" << endl;

	return 0;
}