// 수업시간에 구현한 swap()함수를 그대로 이용하여 배열의 bubble 정렬을 구현하시오.
#include <stdio.h>
void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void bubblesort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
void main()
{
    int a[] = { 5, 4, 3, 2, 1 };
    int n = sizeof(a) / sizeof(a[0]); // 0번 째 인덱스의 자료형을 구해서 나눔 ex) int형이면 4로 나누어줘서 크기를 구함
    int i;

    bubblesort(a, n);

    printf("정렬된 배열: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
