// �Է� ���� ���ڿ����� �� ��� ���ڸ� ����Ͻÿ�.(���̰� ¦���� 2�� ���)
#include <stdio.h>
#include <string.h>
void main4()
{
	char s[100];
	int len;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets_s(s, 100);

	len = strlen(s);
	if (len % 2 == 1)
	{
		printf("%c\n", s[len / 2]);
	}
	else
	{
		printf("%c%c\n", s[(len / 2) - 1], s[len / 2]);
	}
}