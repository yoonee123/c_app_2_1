// 배열의 각 원소를 2배로 만들어 주는 함수 만들기(포인터 변수를 인자로 하는 void 함수 만들 것. (void dblA(int p[], int sz) )
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