#include <stdio.h>
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
