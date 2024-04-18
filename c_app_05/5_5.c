// 10개의 수를 배열에 입력 받고, 버블정렬 방법으로 정렬하시오.
#include <stdio.h>
void main5()
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
			if (arr[i] > arr[j])
			{
				s = arr[i];
				arr[i] = arr[j];
				arr[j] = s;
			}
		}
	}
	printf("버블 정렬하여 출력한 값은 : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}