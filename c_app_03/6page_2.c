//실수 두개를 입력하고 연산식을 번호로 선택한뒤, 출력하시오.
#include <stdio.h>
void main()
{
	double n1, n2;
	printf("실수 두 개를 입력하세요. : ");
	scanf_s("%lf %lf", &n1, &n2);
	int n;
	printf("연산식을 번호로 입력하세요. 1(+), 2(-), 3(*), 4(/)");
	scanf("%d", &n);
}