// 세 개의 정수포인터를 인자로 받아 제일 큰 수의 주소를 리턴 하는 함수를 만들고 호출해 보시오. (예)int* maxPosition(int*, int*, int*)
// 함수의 반환 타입이 포인터일 때, 그 함수가 반환하는 것은 해당 포인터가 가리키는 메모리 주소입니다.
#include <stdio.h>
int* maxPosition(int* p1, int* p2, int* p3)
{
	if (*p1 >= *p2 && *p1 >= *p3)
	{
		return p1;
	}
	else if (*p2 >= *p1 && *p2 >= *p3)
	{
		return p2;
	}
	else
	{
		return p3;
	}
}
void main4()
{
	int a, b, c;
	printf("값을 3개 입력하세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	int *p = maxPosition(&a, &b, &c);
	printf("가장 큰 값은 : %d", *p);
}
