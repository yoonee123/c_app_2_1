// ���� ���ڸ� �޾� 3�� �Ͽ� ���� �ϴ� �Լ��� �����,
// (  int  tripleValue(int ) ) ȣ���غ��ÿ�.
#include <stdio.h>
int tripleValue(int a)
{
	return a * 3;
}
void main1()
{
	int num;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	int hap = tripleValue(num);
	printf("3���� ���� : %d", hap);
}