#include <stdio.h>

int overandunderflow(){
	
	signed char num1 = 130;
	
	unsigned char num2 = -5;

	printf("over flow = %d,underflow = %u",num1, num2);

	return 0;
}