#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int practice() {

	int num1;
	int num2;
	int num3;

	printf("정수 세 개를 입력하세요 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("%d,%d,%d의 합은 %d 입니다", num1, num2, num3, num1 + num2 + num3);

	return 0;
}