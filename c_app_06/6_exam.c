// 20억 이상 소수 10개 찾기
#include <stdio.h>
int prime(int num); // 소수면 1, 아니면 0

void main()
{
	int cnt = 0;
	int i, j;

	for (int i = 2000000000; ; i++)
	{
		/*for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			cnt++;
			printf("20억 이상의 소수 : %d\n", i);
			if (cnt == 10)
				break;
		}*/

		if (is_prime(i) == 1)
		{
			cnt++;
			printf("20억 이상의 소수 : %d\n", i);
			if (cnt == 10)
				break;
		}
	}
}

int prime(int num)	
{
	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}