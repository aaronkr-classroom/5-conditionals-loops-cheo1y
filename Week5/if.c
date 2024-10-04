// if.c
#include <stdio.h>

int main(void)
{
	int score = 92;
	char grade;

	printf("작업 시작\n");
	printf("점수를 입력하세요 >>> ");
	scanf_s("%d", &score);

	if (90 <= score)
	{
		grade = 'A';
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	}
	else if (80 <= score)
	{
		grade = 'B';
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	}
	else if (70 <= score)
	{
		grade = 'C';
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	}
	else if (60 <= score)
	{
		grade = 'D';
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	}
	else
	{
		grade = 'F';
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	}

	printf("작업 종료\n");

	getch();	// 콘솔창 유지하기
	return 0;
}