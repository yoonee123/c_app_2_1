// �Է��� �Ž�����(���� �̸�, �ּ� ���� ���)�� ū �� �������� ������ ���Ͻÿ�.
// (���� 9700���̸� 5000�� 1��, 1000�� 4��, 500�� 1��, 100�� 2��)
#include <stdio.h>
void main()
{
	int mon, mod = 0;
	printf("�Ž��� ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &mon);
	mod = mon / 5000;
	printf("5000���� %d��\n", mod);
	mon = mon % 5000;
	mod = mon / 1000;
	printf("1000���� %d��\n", mod);
	mon = mon % 1000;
	mod = mon / 500;
	printf("500���� %d��\n", mod);
	mon = mon % 500;
	mod = mon / 100;
	printf("100���� %d��\n", mod);
}