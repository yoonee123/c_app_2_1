#include <stdio.h>

void main()
{
	int m = 1000000; // 원금
	int d; // 기간
	double r; // 총수령액
	double p = 0.045; // 이자

	printf("예치 기간(년 단위)을 입력하세요: ");
	scanf_s("%d", &d);

	r = m * (1 + p * d); // 계산

	printf("총수령액 : %.0lf\n", r);
}