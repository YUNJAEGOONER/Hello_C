#include <stdio.h>
int control() {
	printf("Control Character\n");

	char c1 = 'a';
	char c2 = 'b';
	char lineFeed = '\n';

	printf("%c%c%c%c\n",c1,lineFeed,c2,lineFeed);
	//%c로 제어문자 출력 가능
	//Type of control character is char

	printf("lineFeed ASCII %d, ASCII(hex) 0x%x\n",lineFeed, lineFeed);


	return 0;
}