// �޸� ���� �Ҵ� ( C type )

#include <iostream>
using namespace std;

int main()
{
	int* arr;
	char size;

	printf("�迭 ���� ����: ");
	scanf_s("%d", &size);					// scanf�� �Է��� ���� ���� �ּ� �����ڰ� �ʿ�

	// arr = (int*)malloc(sizeof(20));		// 20���� �游 ���� ��(�ʺ����� ����ϴ� ���)
	arr = (int*)malloc(sizeof(int));		// heap������ �޸𸮰� �Ҵ�� -> �Ҵ�� (4����Ʈũ��)�޸��� ���� �ּ� ���� - ����Ʈ ���� ����

	printf("������� �迭 ũ��: %d\n", sizeof(int) * size);		//	������ �޸� ��ȯ(�� �ϸ� �ڿ� ��)- ������ ����	// malloc ¦�� free
	printf("%d\n", sizeof(int));

	free(arr);								// �޸� ����*****

	return 0;
}