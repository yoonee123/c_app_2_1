//10���� ���� �Է� �޾� ������ �迭�� ������ ��, �� ���� �߿� �ִ��� ã�� ����Ͻÿ�.
#include <stdio.h>
void main3()
{
	int arr[10];
	int s;
	printf("10���� ���� �Է��ϼ��� : ");
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
	printf("\n �Է��� ���� �ִ��� : %d", arr[0]);
}