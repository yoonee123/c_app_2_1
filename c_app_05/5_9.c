// 10���� ���� �迭�� �Է� �ް�, �������� �Ǵ� �������� ������� �����Ͻÿ�.
#include <stdio.h>
void main9()
{
	int arr[10];
	int min, s;

	printf("10���� ���� �Է��ϼ��� : ");
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
	printf("���� �����Ͽ� ����� ���� : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
