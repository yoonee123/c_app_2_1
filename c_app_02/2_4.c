// 삼항연산자를 이용하여 입력한 세 수 의 최댓값을 구하시오.
#include <stdio.h>
void main4()
{
	int a, b, c, max;
	printf("3개의 수를 입력하세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c)
	{
		max = a;
	}
	else if (b >= a && b >= c)
	{
		max = b;
	}
	else
		max = c;
	printf("세 수의 최댓값은 : %d", max);
}