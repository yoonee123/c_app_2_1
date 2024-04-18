// 입력된 3수 중 가장 큰 값과 가장 작은 값을 구하시오.
// (큰 값 구해서 리턴하는 함수와, 
// 작은 값 구해서 리턴하는 함수를 각각 구현)
#include <stdio.h>
int top(a, b, c);
int row(a, b, c);
void main3()
{
	int x, y, z;
	int top1, row1; 
	printf("수 3개를 입력하세요 : ");
	scanf_s("%d %d %d", &x, &y, &z);

	top1 =  top(x, y, z);
	row1 = row(x, y, z);
	printf("가장 큰 수는 : %d\n가장 작은 수는 : %d", top1, row1);
}
int top(a, b, c)
{
	if (a >= b && a >= c) return a;
	else if (b >= a && b >= c) return b;
	else return c;
}
int row(a, b, c)
{
	if (a <= b && a <= c) return a;
	else if (b <= a && b <= c) return b;
	else return c;
}