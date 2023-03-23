// 이렇게 선언 해버리면 이름충돌 발생확률이 상대적으로 높아진다

#include <iostream>
using namespace std;

int main(void)
{
	int num = 20;
	cout << "Hello world!" << endl;
	cout << "Hello " << "world!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;

	return 0;
}
