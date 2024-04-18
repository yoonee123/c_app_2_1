// 20�� �̻��� �Ҽ�(prime number) 10�� ã��.
// (�Ҽ����� �˷��ִ� �Լ��� ������ �� �� : int is_prime(int))
#include <stdio.h>

int is_prime(long long int n);

void main8() {
    long long int pn = 2000000000LL;
    int count = 0;

    while (count < 10) {
        if (is_prime(pn)) {
            printf("20�� �̻��� �Ҽ�: %lld\n", pn);
            count++;
        }
        pn++;
    }
}

int is_prime(long long int n) {
    if (n <= 1) {
        return 0; // �Ҽ��� �ƴ�
    }
    for (long long int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // �Ҽ��� �ƴ�
        }
    }
    return 1; // �Ҽ���
}