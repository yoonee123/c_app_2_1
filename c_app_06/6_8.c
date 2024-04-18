// 20억 이상의 소수(prime number) 10개 찾기.
// (소수인지 알려주는 함수를 구현할 것 예 : int is_prime(int))
#include <stdio.h>

int is_prime(long long int n);

void main8() {
    long long int pn = 2000000000LL;
    int count = 0;

    while (count < 10) {
        if (is_prime(pn)) {
            printf("20억 이상의 소수: %lld\n", pn);
            count++;
        }
        pn++;
    }
}

int is_prime(long long int n) {
    if (n <= 1) {
        return 0; // 소수가 아님
    }
    for (long long int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // 소수가 아님
        }
    }
    return 1; // 소수임
}