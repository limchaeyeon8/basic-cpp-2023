#include <stdio.h>

enum wee
{
	sun = 0,			// 열거형- 여러개 들어갈 수 있음
	mon = 1,
	tue = 2,
	wed = 3,
	thu = 4,
	fri = 5,
	sat = 6
};

int main()
{
	printf("%d\n", sun);
	printf("%d\n", tue);
	printf("%d\n", wed);



	return 0;
}