// ���� �� �Լ��� ������ �� �� 10�� 20�� ���� ������ �Լ��� �����
// ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// int addbyvalue(int a, int b);
// void addbyaddress(int* sum, int a, int b);
#include <stdio.h>
int addbyvalue(int a, int b) 
{
    return a + b;
}
void addbyaddress(int* sum, int a, int b) 
{
    *sum = a + b;
}
void mainprc() {
    int a = 10;
    int b = 20;

    int sum1 = addbyvalue(a, b);
    printf("a = %d b = %d, ��: %d\n",a, b, sum1);

    int sum2;
    addbyaddress(&sum2, a, b);
    printf("a = %d b = %d, ��: %d\n", a, b, sum2);
}
