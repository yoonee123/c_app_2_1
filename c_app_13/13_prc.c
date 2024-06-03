// 다음 두 함수를 구현해 두 수 10과 20의 합을 각각의 함수를 사용해
// 출력하는 프로그램을 작성하시오.
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
    printf("a = %d b = %d, 합: %d\n",a, b, sum1);

    int sum2;
    addbyaddress(&sum2, a, b);
    printf("a = %d b = %d, 합: %d\n", a, b, sum2);
}
