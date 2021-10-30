#include <stdio.h>

int sign(){
	
	char num1= -10; //8bit
	//(signed) char num1 = -10; (signed 생략가능)

	short num2 = 30000;	//16bit
	int num3 = -1234567890;	//32bit
	long num4 = 1234567890123;	//32bit
	long long num5 = -1234567890123456789;	//64bit

	printf("%d char \n%d short \n%d int \n%ld long \n%lld long long \n", num1, num2,num3,num4,num5);
	
	// %d (char, short, int), %ld (long), %lld(long long)

	return 0;
}

int unsign() {

	unsigned char num1 = 235; //8bit
	unsigned short num2 = 654321;	//16bit
	unsigned int num3 = 1234567890;	//32bit
	unsigned long num4 = 1234567890123;	//32bit
	unsigned long long num5 = 1234567890123456789;	//64bit

	printf("%u unsigned char \n%u unsigned short \n%u unsigned int \n%lu unsigned long \n%llu unsigned long long \n", num1, num2, num3, num4, num5);
	//% d% ld% llf\n
	//%u(unsigned char,unsigned short,unsigned int), %lu (unsigned long), %llu(unsigned long long)

	return 0;
}