// 입력된 수의 1.1승, 2.2승, 3.3승, …, 9.9승을 출력하시오
// (라이브러리 함수 pow() 사용)
#include <stdio.h>
#include <math.h>
void main4()
{
	int n, i;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &n);

	for (i = 10; i <= 50; i += 10)
	{
		printf("2의 %d승은 : %.0lf\n", i, pow((double)n, (double)i));
	}
}