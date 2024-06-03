// 한글이 섞여 있는 문자열에서 한글만 골라서 출력하게 해보시오.
// (단 한글은 2바이트로 표현되며, 2바이트의 각각 첫 비트(MSB)가 1임, 
// 가령 ‘가’는 0xb0a1 임 )
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
    const char* input = "Hello mirae PA~! 컴퓨터 정보 친구들 안녕";
    char output[256];

    KoreanCheck(input, output);

    printf("한글 문자열 : %s", output);
}
