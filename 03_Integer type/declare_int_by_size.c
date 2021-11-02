#include <stdio.h>
#include<stdint.h> //ũ��� ���� �ڷ����� ǥ���� �� �ְ� �����ش�.

int intsize() {

	//signed
	int8_t num1 = -128; //8bit ���� �ڷ���
	int16_t num2 = 32767; //16bit (2byte)
	int32_t num3 = 2147483647;
	int64_t num4 = 9223372036854775807;

	//8,16 ��Ʈ �� ���� %d,32��Ʈ�� ���� %d or %ld ,64bit �� ���� %lld
	// %d (char(8), short(16), int(32)), %ld (long(32)), %lld(long long(64))
	
	printf("signed = int����_t : %d, %d, %ld, %lld\n",num1,num2,num3,num4);

	//unsigned
	uint8_t num5 = 255;
	uint16_t num6 = 65535;
	uint32_t num7 = 4294967295;
	uint64_t num8 = 18446744073709551615;


	//8,16 ��Ʈ �� ���� %u,32��Ʈ�� ���� %u or %lu ,64bit �� ���� %llu
	// %u (char(8), short(16), int(32)), %lu (long(32)), %llu(long long(64))
	printf("usigned = uint����_t : %u, %u, %u, %llu\n", num5, num6, num7, num8);
	return 0;
}