// ���ڿ��� �Է� �޾�(gets() �̿�), 3 ���ھ� �߶� ���� �� ���ο� ����Ͻÿ�.
#include <stdio.h>
void main2()
{
	char s[100];
	int i = 0;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets_s(s, 100);
	while (s[i])
	{
		printf("%c", s[i]);
		i++;
		if (i % 3 == 0)
		{
			printf("\n");
		}
	}
}
