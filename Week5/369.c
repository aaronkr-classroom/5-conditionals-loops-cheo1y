// 369.c
#include <stdio.h>

void check369(int num);		// 함수 원형 선언문

int main(void)
{
	int num = 0;
	printf("369게임 환영합니다. 언제까지 합니까? >>> ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
		check369(i);				// num 대신 i 사용 (i = 1-100, num = 100)

	getch();
	return 0;
}

// 함수 정의 블록
void check369(int num)		// num에서 3, 6, 9 있나요?
{
	int contains369 = 0;
	int temp = num;

	// num에 있는 모든 숫자를 확인하기
	while (temp > 0)
	{
		int digit = temp % 10; // %는 나머지 값 연산자

		// 3,6,9 있어요?
		switch (digit)
		{
		case 3:
		case 6:
		case 9:
			contains369 = 1;	// 참(true)
			break;
		}

		temp /= 10; // 다음 숫자로 이동하기
	}

	if (contains369) printf("짝!~\n");
	else printf("%d\n", num);
}
