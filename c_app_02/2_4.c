// ���׿����ڸ� �̿��Ͽ� �Է��� �� �� �� �ִ��� ���Ͻÿ�.
#include <stdio.h>
void main4()
{
	int a, b, c, max;
	printf("3���� ���� �Է��ϼ��� : ");
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
	printf("�� ���� �ִ��� : %d", max);
}