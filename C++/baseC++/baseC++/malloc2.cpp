// �޸� ���� �Ҵ�2 ( C type )

#include <iostream>
using namespace std;

int main()
{
	int size;
	int* arr;

	printf("�迭����: ");
	scanf_s("%d", &size);

	// �����Ҵ�
	arr = (int*)malloc(sizeof(int) * size);

	printf("%d���� ���ڸ� �Է��Ͻÿ� \n", size);

	for (int i = 0; i < size; i++)
	{
		printf("%d��° ����: ", i + 1);
		scanf_s("%d", arr + i);			// scanf�� �ּҿ����� �ʿ� - ���⼭�� �ּ��̸�(�迭��) ��� ���̱� ������ ok
	}
	
	// ���
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
		printf("%d\n", *(arr + i));		///////////////////////////////////////������������

	}

	free(arr);				// �ü���� ���������ִ��� �� ���� ��Ű��

	return 0;
}