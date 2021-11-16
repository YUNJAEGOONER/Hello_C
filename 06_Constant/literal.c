#include <stdio.h>

int literal_c () {
	
	printf("%s\n", "Hello Literal & Constant");
	printf("%d\n", 10);
	printf("%f\n", 0.123f);
	printf("%c\n",65);

	printf("8진 정수 0%o\n", 017);
	printf("16진 정수 0x%X\n", 0x1f);

	printf("%f\n", 1.23f);
	printf("%f\n", 0.123F);
	printf("%f\n", 1.23e-2f);
	printf("%f\n", 1.23e-3F);

	return 0;
}