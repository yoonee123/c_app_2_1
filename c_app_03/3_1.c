// �Է¹��� ���ڰ� �빮���̸� �ҹ��ڷ�, �ҹ����̸� �빮�ڷ�, �� �ܴ� �״�� ����Ͻÿ�.
#include <stdio.h>
void main1()
{
	char c;

	printf("���ڸ� �ϳ� �Է��ϼ���.\n");
	scanf_s("%c", &c, 1);

	if (c >= 'A' && c <= 'Z')
	{
		printf("%c", c + 32); // c + 'a'-'A'
	}
	else if (c >= 'a' && c <= 'z')
	{
		printf("%c", c - 32);
	}
	else
	{
		printf("%c", c);
	}
}