// ���ڿ� ���ڿ��� ����(consonant)�� ���, 
// �������θ� �� ���ڿ��� �������ִ� �Լ��� ����� ȣ���� ���ÿ�.
// (���ڿ��� char �迭�� ����Ǹ� �� ���� �ڿ� ��ĳ����(��\0�� �� 0)�� �����ؼ� ���ڿ� ���� ��Ÿ��.
#include <stdio.h>
char* conso(char a[], int sz)
{
	static char c[100];
	int c_index = 0;

	for (int i = 0; i < sz; i++)
	{
			if (a[i] != 'a' && a[i] != 'i' && a[i] != 'u' && a[i] != 'o' && a[i] != 'e')
			{
				c[c_index++] = a[i];
			}
	}
	c[c_index] = '\0';
	return c;
}
void main4()
{
	char* p;
	char arr[] = "helloworld";

	p = conso(arr, 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%c", p[i]);
	}
}