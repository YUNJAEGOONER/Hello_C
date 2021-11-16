#define _CRT_SECURE_NO_WARNINGS //scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int scanf_integer() {

	printf("정수 값을 입력하세요 : ");
	
	int num1; //int 타입의 변수 num1 선언

	scanf_s("%d", &num1);

	//scanf("%d", &num1);
	//scanf("서식지정자",&입력값을 받을 변수)

	printf("%d",num1);

	return 0;

}