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
	String();						// ����Ʈ ������
	String(const char* s);			// ���ڿ��� �޴� ������
	String(const String& s);		// ���� ������

	~String();

	String& operator = (const String& s);
	String& operator += (const String& s);
	bool operator == (const String& s);
	String operator+ (const String& s);

	friend ostream& operator << (ostream& os, const String& s);
	friend istream& operator >> (istream& is, String& s);		// ���ȭ �� �ϴ� ����?: 
};

String::String()
{
	len = 0;
	str = nullptr;		// nullpointer; �������ͷ� �ʱ�ȭ // NULL �ᵵ ��
}

String::String(const char* s)		// ������ // ��ü������ - ���ڿ��� �Է����� �޴� ������ ȣ��
{
	len = strlen(s) + 1;			// len ������� �ʱ�ȭ
	str = new char[len];			// str ������� �ʱ�ȭ
	strcpy(str, s);					// �о�� ���ڿ��� ����
}

String::String(const String& s)
{
	len = s.len;					// len ������� �ʱ�ȭ
	str = new char[len];			// str ������� �ʱ�ȭ
	strcpy(str, s.str);				// �о�� ���ڿ��� ����
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
{										// ���չ迭 ������(strcat)

	len += (s.len - 1);					// -1 : ���ڿ� ���� ���ؼ� �����ϸ� null���ڰ� �� ���� �ǹǷ� null �ϳ� ����
	char* tempstr = new char[len];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);				// s.str ���ڿ��� ����

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

istream& operator >> (istream& is, String& s)			// �����Լ��μ� �����ε� // ���� ����- �ڱ��ڽ��� 
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
		cout << "���� ���ڿ�" << endl;
	else
		cout << "�������� ���� ���ڿ�" << endl;

	string str4;
	cout << "���ڿ� �Է� : ";
	cin >> str4;
	cout << "�Է��� ���ڿ� : " << str4 << endl;

	return 0;
}