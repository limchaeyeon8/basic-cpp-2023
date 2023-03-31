#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class String
{
private:
	int len;
	char* str;
public:
	String();						// 디폴트 생성자
	String(const char* s);			// 문자열을 받는 생성자
	String(const String& s);		// 복사 생성자

	~String();

	String& operator = (const String& s);
	String& operator += (const String& s);
	bool operator == (const String& s);
	String operator+ (const String& s);

	friend ostream& operator << (ostream& os, const String& s);
	friend istream& operator >> (istream& is, String& s);		// 상수화 안 하는 이유?: 
};

String::String()
{
	len = 0;
	str = nullptr;		// nullpointer; 널포인터로 초기화 // NULL 써도 됨
}

String::String(const char* s)		// 생성자 // 객체포인터 - 문자열을 입력으로 받는 생성자 호출
{
	len = strlen(s) + 1;			// len 멤버변수 초기화
	str = new char[len];			// str 멤버변수 초기화
	strcpy(str, s);					// 읽어온 문자열을 저장
}

String::String(const String& s)
{
	len = s.len;					// len 멤버변수 초기화
	str = new char[len];			// str 멤버변수 초기화
	strcpy(str, s.str);				// 읽어온 문자열을 저장
}

String::~String()
{
	if (str != NULL)
		delete[]str;
}


String& String::operator = (const String& s)
{
	if (str != NULL)
		delete[]str;

	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
	return *this;
}

String& String::operator += (const String& s)
{										// 복합배열 연산자(strcat)

	len += (s.len - 1);					// -1 : 문자열 둘을 더해서 대입하면 null문자가 둘 개가 되므로 null 하나 삭제
	char* tempstr = new char[len];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);				// s.str 문자열을 붙임

	if (str != NULL)
		delete[]str;
	str = tempstr;
	return *this;
}

bool String::operator== (const String& s)
{
	return strcmp(str, s.str) ? false : true;
}

String String::operator+ (const String& s)
{
	char* tempstr = new char[len + s.len - 1];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	String temp(tempstr);
	delete[]tempstr;
	return temp;
}

ostream& operator<<(ostream& os, const String& s)
{
	os << s.str;
	return os;
}

istream& operator >> (istream& is, String& s)			// 전역함수로서 오버로딩 // 앞의 인자- 자기자신을 
{
	char str[100];
	is >> str;
	s = String(str);
	return is;
}


int main(void)
{
	String str1 = "I love you to the ";
	String str2 = "moon and back";
	String str3 = str1 + str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	if (str1 == str3)
		cout << "동일 문자열" << endl;
	else
		cout << "동일하지 않은 문자열" << endl;

	string str4;
	cout << "문자열 입력 : ";
	cin >> str4;
	cout << "입력한 문자열 : " << str4 << endl;

	return 0;
}