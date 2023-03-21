#include <iostream>

/*
void addF(void)	// 입출력 없는 함수
{
	int A = 10;
	int B = 20;
	int res;
	res = A + B;

	std::cout << "res : " << res << std::endl;
}
*/

/*
void add(int a, int b)	// 입력 있는 함수(출력x)	// 입력을 만드는 방법 - 매개변수를 선언
{
	int res = a + b;

	std::cout << "res : " << res << std::endl;
}
*/

int addddd(int a, int b)	// 입출력 있는 함수		// 출력O - return문으로 작성
{
	int res = a + b;
	return res;
	
}

int main()
{
		
	// addF();		// 호출

	/*
	int n1 = 10;
	int n2 = 20;
	add(n1, n2);		// 호출	// *실인수; 입력으로 값 전달해줌(n1, n2)
	*/

	int n1 = 10;
	int n2 = 20;

	int res = addddd(n1, n2);				// 리턴되는 값을 저장해서 사용

	std::cout << "res : " << res << std::endl;
}