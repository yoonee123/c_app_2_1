#include <stdio.h>
void main10() {
    int a[] = { 4,7,9,3,6 };
    int b[] = { 10,20,30,40,50,60 };
    int n;

    printf("자연수 1부터 5사이를 입력하세요 : ");
    scanf_s("%d", &n);

    if (n <= 0 || n >= 6)
    {
        printf("잘못된 값 입력\n");
    }

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    for (int i = 0; i < sizeof(b) / sizeof(int); i++)
    {
        printf("%d ", b[i]);
    }
}