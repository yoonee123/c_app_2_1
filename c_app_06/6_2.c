// a(정수)의 b(자연수)승을 해 주는 함수를 직접 만들고, 호출해 보시오.
#include <stdio.h>
#include <math.h>
int mypow(int a, int b);
void main2()
{
	int x, y, res;
	printf("정수 2개를 입력하세요. : ");
	scanf_s("%d %d", &x, &y);

	res = mypow(x, y);
	printf("결과는 : %d", res);
}
int mypow(int a, int b)
{
	int i, mul = 1;
	
	for (i = 1; i <= b; i++)
	{
		mul = mul * a;
	}
	return mul;
}