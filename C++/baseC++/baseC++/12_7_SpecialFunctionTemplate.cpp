// 함수 템플릿의 특수화(Specialization)

#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

template <>
char* Max(char* a, char* b)
{
	cout << "char* Max < const char* > (const char* a, const char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;			// 문자열 길이 비교
}

template <>
const char* Max(const char* a, const char* b)
{
	cout << "const char* Max<const char*>(const char* a, const char* b)" << endl;
	return strcmp(a, b) > 0 ? a : b;				// 사전편찬 순서 비교
}

int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;

	char str1[] = "Simple";
	char str2[] = "Best";
	cout << Max(str1, str2) << endl;

	return 0;
}