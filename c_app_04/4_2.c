// 첫 번째 입력 받은 정수부터 두 번째 입력 받은 정수까지의 합을 구하시오.
#include <stdio.h>
void main2()
{
	printf("정수 두 개를 입력하세요.");
	int a, b, sum = 0;
	scanf_s("%d %d", &a, &b);
	for (a; a <= b; a++)
	{
		sum = sum + a;
	}
	printf("입력한 첫 번째 수 부터 두 번째 수까지의 합은 : %d", sum);
}