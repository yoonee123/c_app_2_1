// 세 개의 정수포인터를 인자로 받아 제일 큰 수를 리턴 하는 함수를 만들고 호출해 보시오. (예)int  maxValue(int*, int*, int*)
#include <stdio.h>
int maxValue(int* p1, int* p2, int* p3)
{
	if (*p1 >= *p2 && *p1 >= *p3)
	{
		return *p1;
	}
	else if (*p2 >= *p1 && *p2 >= *p3)
	{
		return *p2;
	}
	else
	{
		return *p3;
	}
}
void main3() 
{
	int a, b, c;
	printf("값을 3개 입력하세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	int max = maxValue(&a, &b, &c);
	printf("가장 큰 값은 : %d", max);
}