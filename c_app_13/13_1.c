// �迭�� �� ���Ҹ� 2��� ����� �ִ� �Լ� �����(������ ������ ���ڷ� �ϴ� void �Լ� ���� ��. (void dblA(int p[], int sz) )
#include <stdio.h>
void dblA(int p[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		p[i] = p[i] * 2; //*(p+i) *= 2; // *p++ *= 2;
	}
}
void main1()
{
	int aa[] = { 1, 2, 3, 4, 5 };

	dblA(aa, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", aa[i]);
	}
}