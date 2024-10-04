// if_2.c
#include <stdio.h>

int main(void)
{
	int score;

	printf("작업 시작\n");
	printf("점수를 입력하세요 >>> ");
	scanf_s("%d", &score);

	char grade = (90 <= score) ? 'A' :
		(80 <= score) ? 'B' :
		(70 <= score) ? 'C' :
		(60 <= score) ? 'D' : 'F';

	printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	printf("작업 종료\n");

	getch();	// 콘솔창 유지하기
	return 0;
}