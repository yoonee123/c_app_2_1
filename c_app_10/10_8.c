// 두 개의 포인터의 저장값(주소)을 바꿔주는 swap2(   ,   )함수를 구현하고 호출하여 적절히 바뀜을 보이시오.
// (즉, 포인터 변수에 저장된 주소값을 서로 바꿈. 2중 포인터 필요함)
#include <stdio.h>
void swap2(int** p1, int** p2) {
    int* temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void main() {
    int a = 10, b = 3;
    int* num1 = &a;
    int* num2 = &b;

    printf("교환 전 값은 : %d, %d\n", *num1, *num2);
    swap2(&num1, &num2);
    printf("교환 후의 값은 : %d, %d", *num1, *num2);
}
