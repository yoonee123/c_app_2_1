// ������ �Է� �޾� ū ���� ȭ�� ���ַ� �� ������ ������ ���Ͻÿ�. 
// ȭ������� �迭�� �����Ͽ� �ݺ����� ���ÿ�. (��: 108,000�� => 50000���� 2��, 5000���� 1��, 1000���� 3��)
#include <stdio.h>
void main8()
{
	int money;
	int ex;
	int arr[4];
	int brr[4] = { 50000, 10000, 5000, 1000 };
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &money);
	ex = money / 50000;
	money = money % 50000;
	arr[0] = ex;
	ex = money / 10000;
	money = money % 10000;
	arr[1] = ex;
	ex = money / 5000;
	arr[2] = ex;
	money = money % 5000;
	ex = money / 1000;
	arr[3] = ex;
	for (int i = 0; i < 4; i++)
	{
		printf("%d������ : %d�� ",brr[i], arr[i]);
	}
	

}