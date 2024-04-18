// 10개의 수를 배열에 입력 받고, 그 중 소수(prime number)를 모두 출력하시오.
#include <stdio.h>
void main7()
{
	int arr[10];
	int a = 0;
	printf("수를 10개 입력하세요 : ");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		a = 0;
		for (int j = 2; j < arr[i]; j++)
		{
			if (arr[i] % j == 0)
			{
				a++;
				break;
			}
		}
		if (a == 0 && arr[i] > 1)
			printf("%d ", arr[i]);
	}
}