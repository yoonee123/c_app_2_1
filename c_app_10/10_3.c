// �� ���� ���������͸� ���ڷ� �޾� ���� ū ���� ���� �ϴ� �Լ��� ����� ȣ���� ���ÿ�. (��)int  maxValue(int*, int*, int*)
#include <stdio.h>
int maxValue(int* p1, int* p2, int* p3)
{
	if (*p1 >= *p2 && *p1 >= *p3)
	{
		return *p1;
	}
	else if (*p2 >= *p1 && *p2 >= *p3)
	{
		return *p2;
	}
	else
	{
		return *p3;
	}
}
void main3() 
{
	int a, b, c;
	printf("���� 3�� �Է��ϼ��� : ");
	scanf_s("%d %d %d", &a, &b, &c);
	int max = maxValue(&a, &b, &c);
	printf("���� ū ���� : %d", max);
}