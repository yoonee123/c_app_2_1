// �� ���� ���ڿ��� ǥ���Է����� �Է� �޾� �������� �빮�ڴ� �ҹ��ڷ�, 
// �ҹ��ڴ� �빮�ڷ� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
#include <ctype.h>
void main() {
    char input[100];

    printf("�� ���� ���ڿ��� �Է��ϼ���: ");
    fgets(input, 100, stdin);

    printf("��ȯ�� ���ڿ�: ");
    for (int i = 0; input[i] != '\0'; i++) {
        if (isupper(input[i])) { 
            printf("%c", tolower(input[i])); 
        }
        else if (islower(input[i])) 
        { 
            printf("%c", toupper(input[i])); 
        }
    }
}
