// �������� �ּҸ� ���ڷ� �޾� �ش� ������ 3�� �Ͽ� ���� �ϴ� �Լ��� �����
// (  int  triplePointer1(int *) ) ȣ���غ��ÿ�.
#include <stdio.h>
int triplePointer1(int* p)
{
	return *p * 3;
}
void main2()
{
	int num;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	int hap = triplePointer1(&num);
	printf("3���� ���� : %d", hap);
}