#include <stdio.h>

int char_variable(){

	printf("Character Variabel (feat.ASCII)\n");

	char c1 = 'a';
	char c2 = 'b';

	printf("%c, ASCII code is %d\n", c1, c1);
	//%c(Character)는 문자 출력, %d는 문자의 아스키 코드값(문자의 정수형)이 출력
	//%d 정수 자료형 출력시 사용
	printf("%c, ASCII code is %d\n", c2, c2);

	//Declare the Char variable by using Integer
	//정수로 문자 변수 선언 (10진수 형태)

	char c3 = 97;
	char c4 = 98;

	printf("%d is %c\n", c3, c3);
	printf("%d is %c\n", c4, c4);

	//정수로 문자 변수 선언 (16진수(hexadecimal) 형태)

	char c5 = 0x61;
	char c6 = 0x62;

	printf("%c %d(ASCII 10진수) 0x%x(ASCII 16진수)\n", c5, c5, c5);
	//%x(hex)는 61출력
	printf("%c %d(ASCII 10진수) 0x%x(ASCII 16진수)\n", c6, c6, c6);

	char c7 = '0'; // char 0
	char c8 = 0; // 0번째 ASCII (null)

	printf("%c  ASCII code is %d\n",c7,c7);
	printf("%d is %c(null)\n", c8, c8);

	return 0;
}