// 삼항연산자를 이용하여 입력한 세 수 의 최댓값을 구하시오.
#include <stdio.h>
void main4()
{
	int a, b, c, max;
	scanf_s("%d %d %d", &a, &b, &c);
	max = (a >= b) ? (a >= c ? a : c) : (b >= c ? b : c);
	printf("세 수의 최댓값은 : %d", max);
}