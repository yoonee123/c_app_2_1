// 10 ~ 19������ǥ�� �����ÿ�.(10�ܺ��� 19�ܱ���)
#include <stdio.h>
void main5()
{
	for (int i = 10; i <= 19; i++)
	{
		for (int j = 10; j <= 19; j++)
		{
			int hap = i * j;
			printf("%d*%d = %d ", i, j, hap);
		}
		printf("\n");
	}
}