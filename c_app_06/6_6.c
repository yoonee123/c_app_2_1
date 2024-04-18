// 배열의 각 원소값을 거꾸로 바꿔주는 함수를 만들고, 호출해 보시오.
// ({ 1,4,7,5 } -> {5, 7, 4, 1} 예:void rev_arr(int aa[], int sz))

#include <stdio.h>

void rev_arr(int arr[], int sz);

void main6()
{
    int brr[] = { 1, 4, 7, 5 };
    int sz = sizeof(brr) / sizeof(brr[0]);

    printf("원래의 값 : ");
    for (int i = 0; i < sz; i++) {
        printf("%d ", brr[i]);
    }
    printf("\n");

    rev_arr(brr, sz);

    printf("바뀐 값 : ");
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