// �����ð��� ������ swap()�Լ��� �״�� �̿��Ͽ� �迭�� bubble ������ �����Ͻÿ�.
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
    int n = sizeof(a) / sizeof(a[0]); // 0�� ° �ε����� �ڷ����� ���ؼ� ���� ex) int���̸� 4�� �������༭ ũ�⸦ ����
    int i;

    bubblesort(a, n);

    printf("���ĵ� �迭: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
