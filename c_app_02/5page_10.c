#include <stdio.h>

void main()
{
	int m = 1000000; // ����
	int d; // �Ⱓ
	double r; // �Ѽ��ɾ�
	double p = 0.045; // ����

	printf("��ġ �Ⱓ(�� ����)�� �Է��ϼ���: ");
	scanf_s("%d", &d);

	r = m * (1 + p * d); // ���

	printf("�Ѽ��ɾ� : %.0lf\n", r);
}