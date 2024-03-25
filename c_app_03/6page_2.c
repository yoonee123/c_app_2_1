//실수 두개를 입력하고 연산식을 번호로 선택한뒤, 출력하시오.
#include <stdio.h>
void main6_2()
{
	double n1, n2;
	printf("실수 두 개를 입력하세요. : ");
	scanf_s("%lf %lf", &n1, &n2);
	int n;
	printf("연산식을 번호로 입력하세요. 1(+), 2(-), 3(*), 4(/) : ");
	scanf_s("%d", &n);
	double hap;
	if (n == 1)
	{
		hap = n1 + n2;
		printf("%.3lf + %.3lf는 %.3lf", n1, n2, hap);
	}
	else if (n == 2)
	{
		hap = n1 - n2;
		printf("%.3lf - %.3lf는 %.3lf", n1, n2, hap);
	}
	else if (n == 3)
	{
		hap = n1 * n2;
		printf("%.3lf * %.3lf는 %.3lf", n1, n2, hap);
	}
	else if (n == 4)
	{
		hap = n1 / n2;
		printf("%.3lf / %.3lf는 %.3lf", n1, n2, hap);
	}
	else
	{
		printf("올바른 값만 입력하세요.");
	}
}