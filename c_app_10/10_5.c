// ������ ������ �ش纯���� N��ŭ �����ִ� �Լ��� ����ÿ�.(void   addN(int* p, int N))
#include <stdio.h>
void addN(int* p, int n)
{
	*p = *p + n;
}
void main5()
{
	int a, b;
	printf("���� �� �� �Է��ϼ��� : ");
	scanf_s("%d %d", &a, &b);
	addN(&a, b);
	printf("a�� b��ŭ ���� ��� : %d", a);
}
