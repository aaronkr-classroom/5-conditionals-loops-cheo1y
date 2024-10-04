// for.c
#include <stdio.h>

int main(void)
{
	int sum = 0, num;

	for (num = 1; num <= 5; num++)
	{
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num;
		printf("%d\n", sum);
	}

	printf("Final: num = %d, sum = %d\n", num, sum);

	getch();
	return 0;
}