// 5���� ���� �迭�� �Է� ���� ��, �� ���Һ��� �Ųٷ� ����غ��ÿ�.
#include <stdio.h>
void main1()
{
	int arr[5];
	printf("���� 5�� �Է��ϼ��� : ");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("�Է��� ���� �Ųٷ� ����� ����� : ");
	for (int j = 4; j >= 0; j--)
	{
		printf("%d ", arr[j]);
	}
	
}