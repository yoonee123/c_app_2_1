// 10���� ���� �迭�� �Է� �ް�, �� �� �Ҽ�(prime number)�� ��� ����Ͻÿ�.
#include <stdio.h>
void main7()
{
	int arr[10];
	int a = 0;
	printf("���� 10�� �Է��ϼ��� : ");
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