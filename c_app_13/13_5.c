// 문자열을 인자로 받아, 홀수 번째 문자로만 이루어진 문자열과, 
// 짝수 번째 문자로만 이루어진 문자열을 ‘포인터 인자’를 통해 
// 구해주는 함수를 만드시오. 출력은 함수에서 하지 말고 main()에서 하시오.    
// (예)"abcde" => "ace"   "bd“
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

    printf("홀수 문자열 : %s\n", odd);
    printf("짝수 문자열 : %s", even);
}
