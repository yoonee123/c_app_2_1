// 정수 인자를 받아 3배 하여 리턴 하는 함수를 만들고,
// (  int  tripleValue(int ) ) 호출해보시오.
#include <stdio.h>
int tripleValue(int a)
{
	return a * 3;
}
void main1()
{
	int num;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &num);

	int hap = tripleValue(num);
	printf("3배의 값은 : %d", hap);
}