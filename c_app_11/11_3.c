// ���ڿ��� ���ڷ� �޾� ���������� �̷���� ���ڿ��� ����, 
// ������ ���ڷ� ������ �ִ� �Լ��� �����, ȣ���� ���ÿ�.
// (��, ������ a,e,i,o,u ��)   ( void strConsonant(char *, char *) )
#include <stdio.h>
void strVowel(char* s1, char* s2);
void strVowel(char* s1, char* s2)
{
	while (*s1)
	{
		if (*s1 == 'a' || *s1 == 'i' || *s1 == 'u' || *s1 == 'o' || *s1 == 'e')
		{
			*s2 = *s1;
			s2++;
		}
		s1++;
	}
	*s2 = '\0';
}
void main3()
{
	char s1[100], s2[100];
	
	printf("���ڿ��� �Է��ϼ��� : ");
	gets_s(s1, 100);
	strVowel(s1, s2);
	puts(s2);
}