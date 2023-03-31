// 런타임에러(0으로 나눌 경우) 예외 처리

#include <iostream>
using namespace std;


int main()
{
	int a, b, c, d;
	cout << "피젯수를 입력하세요: " << endl;
	cin >> a;
	cout << "젯수를 입력하세요: " << endl;
	cin >> b;

	try
	{
		if (b == 0) throw b;		// ***** 예외가 발생되면

		c = a / b;
		cout << "몫: " << c << endl;
		d = a % b;
		cout << "나머지: " << d << endl;
	}
	
	catch (int ex)
	{
		cout << ex << "로 나눌 수 없습니다. Exception Occured" << endl;
	}

	cout << "예외가 발생해도 정상 종료" << endl;

	return 0;
}