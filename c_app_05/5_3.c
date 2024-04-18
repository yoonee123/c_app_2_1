//10개의 값을 입력 받아 일차원 배열에 저장한 후, 그 값들 중에 최댓값을 찾아 출력하시오.
#include <stdio.h>
void main3()
{
	int arr[10];
	int s;
	printf("10개의 값을 입력하세요 : ");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int j = 1; j < 10; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (arr[i] < arr[j])
			{
				s = arr[i];
				arr[i] = arr[j];
				arr[j] = s;
			}
		}
	}
	printf("\n 입력한 값중 최댓값은 : %d", arr[0]);
}