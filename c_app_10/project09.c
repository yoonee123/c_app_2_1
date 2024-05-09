#include <stdio.h>

void main() {
    int num1 = 10, num2 = 20;
    int sum, * p;

    p = &num1; // int 포인터에 data1 주소 저장
    *p = 100; // *p로 data1을 간접참조해 100으로 수정
    sum = *p; // sum에 *p값 100을 대입

    p = &num2; // int 포인터에 data2 주소 저장
    *p = 200; // *p로 data2을 간접참조해 200으로 수정
    sum += *p; // sum에 *p값 200을 더함

    printf("data1 : %d, data2 : %d, sum : %d\n", num1, num2, sum);
}