#include <stdio.h>
int calculation() {
	printf("calculation in Character\n");
	
	char c1 = 'a';
	printf("%c ASCII code is %d\n", c1, c1);
	//result = a ASCII code is 97;
	
	char next = 'a' + 1; 

	printf("%c's next character is %c , ASCII code is %d\n", c1, next, next);

	char c2 = 97;

	printf("%c's next character is %c , ASCII code is %d\n", c2, c2+1, c2+1);

	return 0;
}