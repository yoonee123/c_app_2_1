// "이름, 나이, 혈액형"을 멤버로 가지는 구조체를 정의하고, 자신의 정보를 입력 받아
// 저장한 다음, 구조체 포인터를 이용하여 다시 출력하시오.
#include <stdio.h>

struct info
{
	char name[12];
	int age;
	char blood[4];
};
void main1()
{
	struct info me;
	printf("이름 나이 혈액형 입력!\n");
	scanf_s("%s %d %s", me.name, 12, &me.age, me.blood, 4);
	struct  info* p = &me;
	printf("이름 : %s 나이 : %d살 혈액형 : %s형", p->name, p->age, p->blood);
}