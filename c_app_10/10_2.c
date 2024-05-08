// 정수변수 주소를 인자로 받아 해당 정수를 3배 하여 리턴 하는 함수를 만들어
// (  int  triplePointer1(int *) ) 호출해보시오.
#include <stdio.h>
int triplePointer1(int* p)
{
	return *p * 3;
}
void main2()
{
	int num;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &num);

	int hap = triplePointer1(&num);
	printf("3배의 값은 : %d", hap);
}