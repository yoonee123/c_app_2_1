// �迭 2���� �Է� �޾�, ���� ÷���� �� ���� �� ū ������ �̷���� �迭�� �����ϴ� �Լ� �����
// (int * maxA(int a[], int b[], int sz)
// (���� ���{ 4,5,8,.. }��{ 1,7,3,.. }�� ���ڷ� ������{ 4,7,8,.. }�� ������.
// ����� �迭 ù ������ �ּҸ� ������)
#include <stdio.h>
int* maxA(int a[], int b[], int sz)
{
	static int c[100];

	for (int i = 0; i < sz; i++)
	{
		if (a[i] >= b[i])
		{
			c[i] = a[i];
		}
		else
		{
			c[i] = b[i];
		}
	}
	return c; //&c[0];
}
void main3()
{
	int* p;
	int arr[] = { 1,4,7,9 };
	int brr[] = { 4,8,3,1 };
	p = maxA(arr, brr, 4);

	for (int i = 0; i < 4; i++)
	{
		printf("%d ", p[i]);
	}
}