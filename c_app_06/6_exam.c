// 20�� �̻� �Ҽ� 10�� ã��
#include <stdio.h>
int prime(int num); // �Ҽ��� 1, �ƴϸ� 0

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
			printf("20�� �̻��� �Ҽ� : %d\n", i);
			if (cnt == 10)
				break;
		}*/

		if (is_prime(i) == 1)
		{
			cnt++;
			printf("20�� �̻��� �Ҽ� : %d\n", i);
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