// 3개의 멤버를 갖는 구조체 struct home_address를 정의하고, 
// 다음으로 변수 2개를 선언하면서 초기 값을 지정해 다음과 같이 출력하는 프로그램을
// 작성하시오.
// address add1 = { 223, "선릉로", "서울시" };
// address add2 = { .city = "서울시", .st_num = 567, .street = "경인로" };

#include <stdio.h>

// 구조체 정의
struct home_address {
    int st_num;
    char street[50];
    char city[50];
};

void main5() {
    // 구조체 변수 선언 및 초기화
    struct home_address add1 = { 223, "선릉로", "서울시" };
    struct home_address add2 = { .city = "서울시", .st_num = 567, .street = "경인로" };

    // 출력
    printf("주소 1:\n");
    printf("도시: %s\n", add1.city);
    printf("거리: %s\n", add1.street);
    printf("번지: %d\n", add1.st_num);

    printf("\n주소 2:\n");
    printf("도시: %s\n", add2.city);
    printf("거리: %s\n", add2.street);
    printf("번지: %d\n", add2.st_num);

}
