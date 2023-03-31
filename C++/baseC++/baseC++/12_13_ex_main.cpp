#include <iostream>

int main(int argc, char* argv[])			// 이중포인터 사용해도 됨
{
	int i = 0;
	printf("전달 인자 개수: %d\n", argc);
	
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}

	return 0;
}