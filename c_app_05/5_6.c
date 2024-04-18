//크기가 4 * 3인 이차원배열을 만들어, 임의의 값(rand() 이용)으로 초기화 한 후 각 열(column)별 합계를 구하시오.
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
	printf("생성된 임의의 값은 : \n");
	
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
	printf("첫 번째 열의 합 : %d\n", hap1);
	printf("두 번째 열의 합 : %d\n", hap2);
	printf("세 번째 열의 합 : %d\n", hap3);
}