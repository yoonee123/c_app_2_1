//ũ�Ⱑ 4 * 3�� �������迭�� �����, ������ ��(rand() �̿�)���� �ʱ�ȭ �� �� �� ��(column)�� �հ踦 ���Ͻÿ�.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main6()
{
	int arr[4][3];
	int hap1 = 0, hap2 = 0, hap3 = 0;
	srand(time(0));
	 
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = rand();
		}
	}
	for (int i = 0; i < 4; i++)
	{
		hap1 = hap1 + arr[i][0];
		hap2 = hap2 + arr[i][1];
		hap3 = hap3 + arr[i][2];
	}
	printf("������ ������ ���� : \n");
	
		for (int j = 0; j < 3; j++)
		{
			printf("%5d ", arr[0][j]);
		}
		printf("\n");
		for (int j = 0; j < 3; j++)
		{
			printf("%5d ", arr[1][j]);
		}
		printf("\n");
		for (int j = 0; j < 3; j++)
		{
			printf("%5d ", arr[2][j]);
		}
		printf("\n");
		for (int j = 0; j < 3; j++)
		{
			printf("%5d ", arr[3][j]);
		}
	printf("\n");
	printf("ù ��° ���� �� : %d\n", hap1);
	printf("�� ��° ���� �� : %d\n", hap2);
	printf("�� ��° ���� �� : %d\n", hap3);
}