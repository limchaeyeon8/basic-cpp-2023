// 함수 템플릿의 특수화(Specialization) 가 없는 코드

#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

int main(void)
{
	cout << Max(11, 15) << endl;				// return a > b ? a : b; 에서 거짓이라 15
	cout << Max('T', 'Q') << endl;				// 참이라 T 반환
	cout << Max(3.5, 7.5) << endl;				// 거짓이라 7.5
	cout << Max("Simple", "Best") << endl;		// 문자열 대상 / 길이비교X / 첫 문자 비교 / Simple 출력 ------ 단순 주소값 비교결과의 반환(의미 없음)

	return 0;
}