// �迭�� ���ڷ� �޾� �ִ밪�� ���� ���Ҹ� ���� ���ִ� �Լ��� �����, 
// �� �Լ��� �̿��Ͽ� �迭�� �Էµ� ���� �� �� �ִ밪�� ����Ͻÿ�.
#include <stdio.h>
int max(int a[], int s);

void main5()
{
	int brr[5] = { 3, 6, 10, 239, 51 };
	int top;

	top = max(brr, 5);
	printf("���� ū ���� : %d", top);
}

int max(int arr[], int s)
{
	int i, top;
	
	top = arr[0];
	for (i = 1; i < s; i++)
	{
		if (arr[i] > top)
		{
			top = arr[i];
		}
	}
	return top;
}