// √1 + √ 2 + … + √n 을 계산하시오.(라이브러리 함수 sqrt()이용)
#include <stdio.h>
#include <math.h>

void main1()
{
	int n, i;
	double sum = 0.0;

	printf("n값을 입력하세요 : \n");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum = sum + sqrt((double)i);
	}
	printf("결과 값은 : %.3lf", sum);
}