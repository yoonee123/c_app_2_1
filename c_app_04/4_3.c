// ���� 1����� �Է¹��� �ر����� ���� ������ ���Ͻÿ�.
#include <stdio.h>
void main3()
{
	int y, cnt = 0;
	printf("�ظ� �Է��ϼ��� : ");
	scanf_s("%d", &y);
	for (int i = 1;i <= y; i++)
	{
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
			cnt++;
	}
	printf("%d", cnt);
}