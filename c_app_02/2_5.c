// �����Կ� Ű�� �Է� �޾� bmi�� ����Ͻÿ�.
// ��, bmi�� ������ / Ű������ 
// ex) bmi = 55/165���� = 20.2
#include <stdio.h>
void main5()
{
	double h, w, bmi;
	printf("Ű(m)�� ������(kg)�� �Է��Ͻʽÿ�.\n");
	scanf_s("%lf %lf", &h, &w);
	h = h / 100;
	h = h * h;
	bmi = w / h;
	printf("����� bmi�� : %.1lf", bmi);
}