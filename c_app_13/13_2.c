// 배열을 인자로 받아 마지막 원소부터 거꾸로 출력해주는 함수 만들기(void revPrint(int p[], int sz) )
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