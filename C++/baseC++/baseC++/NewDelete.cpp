#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len)
{
	// char * str = (char*)malloc(sizeof(char)*len);
	char* str = new char[len];				// new : ������ ȣ��(�ڵ�)
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy");
	cout << str << endl;

	//free(str);
	delete []str;							// delete : �Ҹ��� ȣ��(�ڵ�)

	return 0;
}