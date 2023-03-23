// 메모리 동적 할당2 ( C type )

#include <iostream>
using namespace std;

int main()
{
	int size;
	int* arr;

	printf("배열개수: ");
	scanf_s("%d", &size);

	// 동적할당
	arr = (int*)malloc(sizeof(int) * size);

	printf("%d개의 숫자를 입력하시오 \n", size);

	for (int i = 0; i < size; i++)
	{
		printf("%d번째 숫자: ", i + 1);
		scanf_s("%d", arr + i);			// scanf에 주소연산자 필요 - 여기서는 주소이름(배열명) 사용 중이기 때문에 ok
	}
	
	// 출력
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
		printf("%d\n", *(arr + i));		///////////////////////////////////////간접참조오류

	}

	free(arr);				// 운영체제가 해제시켜주더라도 꼭 해제 시키기

	return 0;
}