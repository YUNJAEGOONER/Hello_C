#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int scan_realnumber() {
	printf("실수를 입력하세요 : ");

	float num1;
	scanf_s("%f", &num1);
	//서식지정자 변경을 통해 scanf 활용
	//double 서식지정자를 lf, long double Lf

	printf("%f\n", num1);

	return 0;
}