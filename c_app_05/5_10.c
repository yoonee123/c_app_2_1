#include <stdio.h>
void main10() {
    int a[] = { 4,7,9,3,6 };
    int b[] = { 10,20,30,40,50,60 };
    int n;

    printf("�ڿ��� 1���� 5���̸� �Է��ϼ��� : ");
    scanf_s("%d", &n);

    if (n <= 0 || n >= 6)
    {
        printf("�߸��� �� �Է�\n");
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