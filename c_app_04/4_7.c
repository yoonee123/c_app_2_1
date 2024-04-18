//for문을 이용하여 다음처럼 출력하시오.
//1
//212
//32123
//4321234
//543212345
#include <stdio.h>
void main7()
{
	int i, j, max = 1;
	for (j = 1; j <= 5; j++)
	{
		for (i = j; i >= 1; i--)
		{
			printf("%d", i);
		}
		for (int k = 2; k <= max; k++) 
		{
			printf("%d", k);
		}
		printf("\n");
		max++;
	}
}