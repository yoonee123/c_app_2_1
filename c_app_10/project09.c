#include <stdio.h>

void main() {
    int num1 = 10, num2 = 20;
    int sum, * p;

    p = &num1; // int �����Ϳ� data1 �ּ� ����
    *p = 100; // *p�� data1�� ���������� 100���� ����
    sum = *p; // sum�� *p�� 100�� ����

    p = &num2; // int �����Ϳ� data2 �ּ� ����
    *p = 200; // *p�� data2�� ���������� 200���� ����
    sum += *p; // sum�� *p�� 200�� ����

    printf("data1 : %d, data2 : %d, sum : %d\n", num1, num2, sum);
}