// ���İ��� �Է� �޾� �մ� 3���� n���� 1 �� ���Ҿ��� ���Ͻÿ�. 
// �� 2���� 1000�� ������ ���� �ݾ��� �ΰ��ϰ� �������� �� ������� �߰� �ΰ��Ͻÿ�. 
// ex) �� 10500���̸� => 3000, 3000, 4500������ �й�
#include <stdio.h>
void main6()
{
	int bap;
	printf("���İ��� �Է��ϼ��� : ");
	scanf_s("%d", &bap);
	int a, b, c;

	a = (bap / 3000) * 1000;
	b = (bap / 3000) * 1000;
	c = bap - (a + b);

	printf("���� ������ �� ���� : %d %d %d", a, b, c);
}