#include <iosteam>

int g = 0;
void func()
{
	printf("func() : %p\n", func);
}

int main()
{
	int n = 10;				// ��������

	func();
	printf("local n : %p\n", &n);
	printf("global g : %p\n", &g);



	return 0;
}