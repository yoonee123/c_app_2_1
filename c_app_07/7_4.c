// 문자열 인자에서 자음(consonant)만 골라, 
// 자음으로만 된 문자열을 리턴해주는 함수를 만들고 호출해 보시오.
// (문자열은 char 배열에 저장되며 끝 문자 뒤에 널캐릭터(‘\0’ 즉 0)를 저장해서 문자열 끝을 나타냄.
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