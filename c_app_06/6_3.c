// �Էµ� 3�� �� ���� ū ���� ���� ���� ���� ���Ͻÿ�.
// (ū �� ���ؼ� �����ϴ� �Լ���, 
// ���� �� ���ؼ� �����ϴ� �Լ��� ���� ����)
#include <stdio.h>
int top(a, b, c);
int row(a, b, c);
void main3()
{
	int x, y, z;
	int top1, row1; 
	printf("�� 3���� �Է��ϼ��� : ");
	scanf_s("%d %d %d", &x, &y, &z);

	top1 =  top(x, y, z);
	row1 = row(x, y, z);
	printf("���� ū ���� : %d\n���� ���� ���� : %d", top1, row1);
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