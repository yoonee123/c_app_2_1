// �ڿ��� �ϳ��� �Է� �޾� �� �� ������ 7�� ����� �ƴ� Ȧ���� ���� ���Ͻÿ�.
#include <stdio.h>
void main1()
{
	int a, sum = 0;
	printf("�ڿ��� �ϳ��� �Է��ϼ��� : ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i+=2)
	{
		if (i % 7 == 0) continue;
		sum = sum + i;
		printf("%4d", i);
	}
	printf("\n7�� ����� ������ Ȧ���� ���� : %d", sum);
}