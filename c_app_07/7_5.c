// �Լ�(���� ��� foo() �Լ�) �ڽ��� �� �� ȣ��Ǿ����� �������ִ� �Լ��� ����� 
// ���� �� ȣ���Ͽ� �����غ��ÿ�.
#include <stdio.h>
static int sum = 0;
int foo()
{
    sum++;
    return sum; // ȣ�� Ƚ���� ������Ų �� ��ȯ
}

void main5()
{
    printf("%d�� ȣ�� �Ǿ����ϴ�.\n", foo());
    printf("%d�� ȣ�� �Ǿ����ϴ�.\n", foo());
    printf("%d�� ȣ�� �Ǿ����ϴ�.\n", foo());
}