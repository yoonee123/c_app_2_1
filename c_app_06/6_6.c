// �迭�� �� ���Ұ��� �Ųٷ� �ٲ��ִ� �Լ��� �����, ȣ���� ���ÿ�.
// ({ 1,4,7,5 } -> {5, 7, 4, 1} ��:void rev_arr(int aa[], int sz))

#include <stdio.h>

void rev_arr(int arr[], int sz);

void main6()
{
    int brr[] = { 1, 4, 7, 5 };
    int sz = sizeof(brr) / sizeof(brr[0]);

    printf("������ �� : ");
    for (int i = 0; i < sz; i++) {
        printf("%d ", brr[i]);
    }
    printf("\n");

    rev_arr(brr, sz);

    printf("�ٲ� �� : ");
    for (int i = 0; i < sz; i++) {
        printf("%d ", brr[i]);
    }
    printf("\n");

}

void rev_arr(int arr[], int sz)
{
    int temp;
    for (int i = 0; i < sz / 2; i++) {
        temp = arr[i];
        arr[i] = arr[sz - i - 1];
        arr[sz - i - 1] = temp;
    }
}