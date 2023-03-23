// 메모리 동적 할당 ( C type )

#include <iostream>
using namespace std;

int main()
{
	int* arr;
	char size;

	printf("배열 방의 갯수: ");
	scanf_s("%d", &size);					// scanf로 입력을 받을 때는 주소 연산자가 필요

	// arr = (int*)malloc(sizeof(20));		// 20개의 방만 만들 때(초보들이 사용하는 방법)
	arr = (int*)malloc(sizeof(int));		// heap영역에 메모리가 할당됨 -> 할당된 (4바이트크기)메모리의 시작 주소 리턴 - 포인트 변수 선언

	printf("만들어진 배열 크기: %d\n", sizeof(int) * size);		//	힙영역 메모리 반환(안 하면 자원 고갈)- 최적의 구조	// malloc 짝지 free
	printf("%d\n", sizeof(int));

	free(arr);								// 메모리 해제*****

	return 0;
}