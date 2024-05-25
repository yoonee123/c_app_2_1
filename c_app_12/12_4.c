#include <stdio.h>

// 구조체 정의
typedef struct {
    char name[50];
    int ismember; // 1이면 회원, 0이면 비회원
    union {
        int membernum; // 회원 번호
        char nickname[50]; // 비회원 닉네임
    } info;
} Person;

void main4() {
    Person people[2] = { 0 }; 

    printf("회원의 이름을 입력하세요: ");
    scanf_s("%49s", people[0].name, (unsigned int)sizeof(people[0].name));
    people[0].ismember = 1;
    printf("회원의 회원 번호를 입력하세요: ");
    scanf_s("%d", &people[0].info.membernum);

    printf("비회원의 이름을 입력하세요: ");
    scanf_s("%49s", people[1].name, (unsigned int)sizeof(people[1].name));
    people[1].ismember = 0;
    printf("비회원의 닉네임을 입력하세요: ");
    scanf_s("%49s", people[1].info.nickname, (unsigned int)sizeof(people[1].info.nickname));

    for (int i = 0; i < 2; i++) {
        printf("\n이름: %s\n", people[i].name);
        if (people[i].ismember) {
            printf("회원 여부: 회원\n");
            printf("회원 번호: %d\n", people[i].info.membernum);
        }
        else {
            printf("회원 여부: 비회원\n");
            printf("닉네임: %s\n", people[i].info.nickname);
        }
    }

}
