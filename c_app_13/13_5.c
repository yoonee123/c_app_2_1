// ���ڿ��� ���ڷ� �޾�, Ȧ�� ��° ���ڷθ� �̷���� ���ڿ���, 
// ¦�� ��° ���ڷθ� �̷���� ���ڿ��� �������� ���ڡ��� ���� 
// �����ִ� �Լ��� ����ÿ�. ����� �Լ����� ���� ���� main()���� �Ͻÿ�.    
// (��)"abcde" => "ace"   "bd��
#include <stdio.h>
void split(const char* input, char* odd, char* even) {
    int oddindex = 0;
    int evenindex = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (i % 2 == 0) {
            odd[oddindex++] = input[i];
        }
        else {
            even[evenindex++] = input[i];
        }
    }

    odd[oddindex] = '\0';
    even[evenindex] = '\0';
}

void main5() {
    const char* input = "abcde";
    char odd[100];
    char even[100];

    split(input, odd, even);

    printf("Ȧ�� ���ڿ� : %s\n", odd);
    printf("¦�� ���ڿ� : %s", even);
}
