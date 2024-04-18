// 10 ~ 19구구단표를 만들어보시오.(10단부터 19단까지)
#include <stdio.h>
void main5()
{
	for (int i = 10; i <= 19; i++)
	{
		for (int j = 10; j <= 19; j++)
		{
			int hap = i * j;
			printf("%d*%d = %d ", i, j, hap);
		}
		printf("\n");
	}
}