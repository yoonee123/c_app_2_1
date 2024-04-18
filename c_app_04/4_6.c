// for문을 이용하여 다음처럼 출력하시오.
//1234567  
//234567
//...
//7
//97531
//9753
//...
//9
#include <stdio.h>
void main6()
{
	int i, j;
	for (j = 0; j <= 7; j++)
	{
		for (i = 1 + j; i <= 7; i++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	printf("\n");
	for (j = 1; j <= 10; j += 2)
	{
		for (i = 9; i >= j; i -= 2)
		{

			printf("%d", i);
		}
		printf("\n");
	}
}
