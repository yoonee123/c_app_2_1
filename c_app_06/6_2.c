// a(����)�� b(�ڿ���)���� �� �ִ� �Լ��� ���� �����, ȣ���� ���ÿ�.
#include <stdio.h>
#include <math.h>
int mypow(int a, int b);
void main2()
{
	int x, y, res;
	printf("���� 2���� �Է��ϼ���. : ");
	scanf_s("%d %d", &x, &y);

	res = mypow(x, y);
	printf("����� : %d", res);
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