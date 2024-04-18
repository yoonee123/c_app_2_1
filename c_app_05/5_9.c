// 10개의 수를 배열에 입력 받고, 선택정렬 또는 삽입정렬 방법으로 정렬하시오.
#include <stdio.h>
void main9()
{
	int arr[10];
	int min, s;

	printf("10개의 값을 입력하세요 : ");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		min = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			s = arr[i];
			arr[i] = arr[min];
			arr[min] = s;
		}
	}
	printf("선택 정렬하여 출력한 값은 : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
