// ���������� �ϳ� �����ϰ� �� �������� ����ŭ ��Hello���� ���� �� ����ϴ� �Լ��� ����ÿ�.
// main()���� �� �������� ���� �Է��� ��, �Լ�ȣ���Ͻÿ�.
#include <stdio.h>
int local = 10;
void prn_hello();

void main1()
{
	prn_hello();
}
void prn_hello()
{
	for (int i = 0; i < local; i++)
	{
		printf("hello\n");
	}
	return 0;
}