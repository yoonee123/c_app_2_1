// �Էµ� ���� 1.1��, 2.2��, 3.3��, ��, 9.9���� ����Ͻÿ�
// (���̺귯�� �Լ� pow() ���)
#include <stdio.h>
#include <math.h>
void main4()
{
	int n, i;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &n);

	for (i = 10; i <= 50; i += 10)
	{
		printf("2�� %d���� : %.0lf\n", i, pow((double)n, (double)i));
	}
}