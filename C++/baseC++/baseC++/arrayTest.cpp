#include <iostream>

int main()
{
	char ch[5] = "chae";		// �迭����	// literal(���); ���� ���ڿ� ��
								// ���ڿ��� ���� null�� ���� ������ �ʿ�
	char che[5];
	che[0] = 'c';				// ���� 5���� ���� ����� ����
	che[1] = 'h';
	che[2] = 'a';
	che[3] = 'e';
	che[4] = 'y';

	for (int i = 0; i < 5; i++)
	{
		printf("%c\n", che[i]);

	}

	//printf("char ũ�� : %d\n", sizeof(char));
	printf("%s\n", ch);

	printf("�迭�̸� : %p\n", ch);
	printf("�迭�ּ� ch : %p\n", &ch);

	// printf("ch[4] : %c\n", ch[4]);
	// printf("ch[4] : %s\n", ch[4]);
	
	return 0;
}