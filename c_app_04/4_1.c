// 자연수 하나를 입력 받아 그 수 이하의 7의 배수가 아닌 홀수의 합을 구하시오.
#include <stdio.h>
void main1()
{
	int a, sum = 0;
	printf("자연수 하나를 입력하세요 : ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i+=2)
	{
		if (i % 7 == 0) continue;
		sum = sum + i;
		printf("%4d", i);
	}
	printf("\n7의 배수를 제외한 홀수의 합은 : %d", sum);
}