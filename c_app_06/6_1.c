// ��1 + �� 2 + �� + ��n �� ����Ͻÿ�.(���̺귯�� �Լ� sqrt()�̿�)
#include <stdio.h>
#include <math.h>

void main1()
{
	int n, i;
	double sum = 0.0;

	printf("n���� �Է��ϼ��� : \n");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum = sum + sqrt((double)i);
	}
	printf("��� ���� : %.3lf", sum);
}