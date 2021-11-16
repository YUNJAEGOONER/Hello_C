#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int char_input(){

	printf("문자를 입력하세요: ");

	char c1;

	//scanf(" %c",&c1);
	scanf_s(" %c", &c1, sizeof(c1));

	//scanf(" %c",&c1);
	//앞선 함수들에 따라 \n를 %c가 받게된다.%c앞에 공백을 주면 이 문제를 해결할 수 있다.
	//입력버퍼비우기 

	printf("%c\n", c1);
	
	return 0;
}
