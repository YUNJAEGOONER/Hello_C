#include <stdio.h>
int size() {
	int num1 = 0;
	int size = sizeof num1;

	printf("num1ÀÇÅ©±â:%dbyte(%dbit)\n", size, size*8);

	return 0;
}

int integer_type_size(){
	printf("char:%d, short:%d, int:%d, long:%d, long long:%d\n",
		sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));

	return 0;
}