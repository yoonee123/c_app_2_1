// ù ��° �Է� ���� �������� �� ��° �Է� ���� ���������� ���� ���Ͻÿ�.
#include <stdio.h>
void main2()
{
	printf("���� �� ���� �Է��ϼ���.");
	int a, b, sum = 0;
	scanf_s("%d %d", &a, &b);
	for (a; a <= b; a++)
	{
		sum = sum + a;
	}
	printf("�Է��� ù ��° �� ���� �� ��° �������� ���� : %d", sum);
}