// �� ������ �Է¹޾� ���� ū ���� ���� ���� ���� ���� ����� �Ҽ��� ���ϸ� �����Ͽ� ��Ȯ�ϰ� ����Ͻÿ�.
#include <stdio.h>
void main4()
{
	int a, b, c, max, min;
	printf("������ �ϳ��� �Է��ϼ���.\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c) max = a;
	else if (b >= a && b >= c) max = b;
	else max = c;

	if (a <= b && a <= c) min = a;
	else if (b <= a && b <= c) min = b;
	else min = c;
	
	printf("���� ū ���� : %d\n", max);
	printf("���� ���� ���� : %d\n", min);

	double result = (double)max / (double)min;
	printf("���� ����� : %.3lf", result);
}