#include <stdio.h>
int practice1() {
	printf("practice1\n");
	unsigned char num1 = 256;
	//overflow (unsigned char의 최댓값(255)보다 1큰 수로 unsigned char의 최솟값(0)으로 할당된다)
	unsigned short num2 = 65536;// 65536 = 2^16
	//overflow (unsinged short 최댓값(65535)보다 1큰 수로 unsigned shortd의 최솟값(0)으로 할당된다)
	signed long long num3 = 9223372036854775808;
	//overflow 
	//singed long long 최댓값(9223372036854775807) 보다 1큰 수로 signed long long의 최솟값(-9223372036854775808)으로 할당된다.
	printf("%u, %u, %lld\n", num1, num2, num3);
	return 0;
}

int practice2() {
	printf("practice2\n");
	return 0;
}

int practice3() {
	printf("practice3\n");
	return 0;
}

int practice4() {
	printf("practice4\n");
	return 0;
}
