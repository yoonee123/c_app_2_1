// �ѱ��� ���� �ִ� ���ڿ����� �ѱ۸� ��� ����ϰ� �غ��ÿ�.
// (�� �ѱ��� 2����Ʈ�� ǥ���Ǹ�, 2����Ʈ�� ���� ù ��Ʈ(MSB)�� 1��, 
// ���� �������� 0xb0a1 �� )
#include <stdio.h>
void KoreanCheck(const char* input, char* output) {
    int outputIndex = 0;
    int i = 0;

    while (input[i] != '\0') {
        if ((input[i] & 0x80) && (input[i + 1] & 0x80)) {
            output[outputIndex++] = input[i];
            output[outputIndex++] = input[i + 1];
            i += 2; 
        }
        else {
            i++; 
        }
    }
    output[outputIndex] = '\0';
}

void main6() {
    const char* input = "Hello mirae PA~! ��ǻ�� ���� ģ���� �ȳ�";
    char output[256];

    KoreanCheck(input, output);

    printf("�ѱ� ���ڿ� : %s", output);
}
