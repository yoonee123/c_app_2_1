//ũ�Ⱑ 3*4�� �������迭�� �����, ������ ��(rand() �̿�)���� �ʱ�ȭ �� �� ����� ���Ͻÿ�. 
//(��, int rand() : 0~32767 ����, stdlib.h �ʿ�)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main2()
{
	int arr[3][4];
	int hap = 0;
	srand(time(0));

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = rand() % 32768;
			hap = hap + arr[i][j];
		}
	}
	printf("������ ������ ���� : ");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	printf("\n��հ��� : ");
	int avg = hap / 12;
	printf("%d", avg);
}