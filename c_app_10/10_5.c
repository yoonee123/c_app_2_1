// 포인터 인자의 해당변수를 N만큼 더해주는 함수를 만드시오.(void   addN(int* p, int N))
#include <stdio.h>
void addN(int* p, int n)
{
	*p = *p + n;
}
void main5()
{
	int a, b;
	printf("값을 두 개 입력하세요 : ");
	scanf_s("%d %d", &a, &b);
	addN(&a, b);
	printf("a를 b만큼 더한 결과 : %d", a);
}
