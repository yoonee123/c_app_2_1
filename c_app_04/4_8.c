// �Է� ���� ������ ����ó�� 32��Ʈ�� ���������·� ����Ͻÿ�.
// (���� 7�̸�, 0000 0000  0000 0000  0000 0000  0000 0111)
#include <stdio.h>
void main8()
{
	printf("������ �Է��ϼ���\n");
	int input, i;
	scanf_s("%d", &input);
	int result = input;

	if (input == 0)
		printf("���α׷��� �����մϴ�");
	else {
		int j = 0;
		for (i = 31; i >= 0; i--)
		{
			if (j != 0 && j % 4 == 0)
				printf(" ");
			printf("%d", (input >> i) & 1);
			j++;
		}
	}

	return 0;
}