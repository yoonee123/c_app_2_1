// 연도를 입력 받아 윤년인지 아닌지 알려주기
// (4의 배수이고 100의 배수 아니면 윤년임. 단 400의 배수이면 무조건 윤년임)
#include <stdio.h>
void main3()
{
	int year; 
	printf("연도를 입력하세요 : ");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d년은 윤년입니다. ", year);
	}
	else
		printf("%d년은 윤년이 아닙니다. ", year);
}