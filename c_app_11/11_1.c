// ���ڿ����� ���ڹ���(�� ��0��~��9��)�� ������ �˷��ִ� �Լ��� �����, 
// ȣ���� ���ÿ�.( int cntNumber(char *) )
#include <stdio.h>
int cntNumber(char* p)
{
	int cnt = 0;

	while (*p) 
	{
		if (*p >= '0' && *p <= '9')
		{
			cnt++;
		}
		p++;
	}
	return cnt++;
}
void main1()
{
	char s[100];

	printf("���ڰ� ���Ե� ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", s, 100);

	printf("������ ������ : %d", cntNumber(s));
}
