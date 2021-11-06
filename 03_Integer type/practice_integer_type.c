#include <stdio.h>
#include <limits.h>
#include<stdint.h>

int practice1() {
	printf("practice1\n");

	unsigned char num1 = 256;
	//overflow (unsigned char�� �ִ�(255)���� 1ū ���� unsigned char�� �ּڰ�(0)���� �Ҵ�ȴ�)
	unsigned short num2 = 65536;// 65536 = 2^16
	//overflow (unsinged short �ִ�(65535)���� 1ū ���� unsigned shortd�� �ּڰ�(0)���� �Ҵ�ȴ�)
	signed long long num3 = 9223372036854775808;
	//overflow 
	//singed long long �ִ�(9223372036854775807) ���� 1ū ���� signed long long�� �ּڰ�(-9223372036854775808)���� �Ҵ�ȴ�.
	printf("%u, %u, %lld\n", num1, num2, num3);
	return 0;
}

int practice2() {
	printf("practice2\n");

	short num1;
	long long num2;

	printf("%d\n", sizeof(num1)+sizeof(num2)+sizeof(int));
	return 0;
}

int practice3() {
	printf("practice3\n");

	char num1 = CHAR_MAX;
	short num2 = SHRT_MAX;
	int num3 = INT_MAX;
	long num4 = LONG_MAX;
	long long num5 = LLONG_MAX;

	printf("%d %d %d %ld %lld\n",num1, num2, num3, num4, num5);

	return 0;
}

int practice4() {
	printf("practice4\n");

	int8_t num1 = INT8_MIN;
	uint16_t num2 = UINT16_MAX;
	int32_t num3 = INT32_MAX;
	uint64_t num4 = UINT64_MAX;
	
	printf("%d, %u, %d, %llu\n", num1, num2, num3, num4);
	return 0;
}
