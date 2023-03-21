#include <iostream>

int main()
{
	char ch[5] = "chae";		// 배열선언	// literal(상수); 고정 문자열 값
								// 문자열은 끝에 null을 넣을 공간이 필요
	char che[5];
	che[0] = 'c';				// 문자 5개가 각각 저장된 상태
	che[1] = 'h';
	che[2] = 'a';
	che[3] = 'e';
	che[4] = 'y';

	for (int i = 0; i < 5; i++)
	{
		printf("%c\n", che[i]);

	}

	//printf("char 크기 : %d\n", sizeof(char));
	printf("%s\n", ch);

	printf("배열이름 : %p\n", ch);
	printf("배열주소 ch : %p\n", &ch);

	// printf("ch[4] : %c\n", ch[4]);
	// printf("ch[4] : %s\n", ch[4]);
	
	return 0;
}