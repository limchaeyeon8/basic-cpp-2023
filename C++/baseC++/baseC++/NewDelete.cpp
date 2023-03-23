#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len)
{
	// char * str = (char*)malloc(sizeof(char)*len);
	char* str = new char[len];				// new : 생성자 호출(자동)
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy");
	cout << str << endl;

	//free(str);
	delete []str;							// delete : 소멸자 호출(자동)

	return 0;
}