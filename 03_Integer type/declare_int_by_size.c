#include <stdio.h>
#include<stdint.h> //크기로 정수 자료형을 표현할 수 있게 도와준다.

int intsize() {

	//signed
	int8_t num1 = -128; //8bit 정수 자료형
	int16_t num2 = 32767; //16bit (2byte)
	int32_t num3 = 2147483647;
	int64_t num4 = 9223372036854775807;

	//8,16 비트 의 경우는 %d,32비트의 경우는 %d or %ld ,64bit 의 경우는 %lld
	// %d (char(8), short(16), int(32)), %ld (long(32)), %lld(long long(64))
	
	printf("signed = int숫자_t : %d, %d, %ld, %lld\n",num1,num2,num3,num4);

	//unsigned
	uint8_t num5 = 255;
	uint16_t num6 = 65535;
	uint32_t num7 = 4294967295;
	uint64_t num8 = 18446744073709551615;


	//8,16 비트 의 경우는 %u,32비트의 경우는 %u or %lu ,64bit 의 경우는 %llu
	// %u (char(8), short(16), int(32)), %lu (long(32)), %llu(long long(64))
	printf("usigned = uint숫자_t : %u, %u, %u, %llu\n", num5, num6, num7, num8);
	return 0;
}