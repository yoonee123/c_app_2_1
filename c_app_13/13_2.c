// �迭�� ���ڷ� �޾� ������ ���Һ��� �Ųٷ� ������ִ� �Լ� �����(void revPrint(int p[], int sz) )
#include <stdio.h>
void revPrint(int p[], int sz)
{
	for (int i = sz - 1; i >= 0; i--)
	{
		printf("%d ", p[i]);
	}
}
void main2()
{
	int aa[] = { 1,2,3,4,5 };

	revPrint(aa, 5);
}