#include <stdio.h>
#include<string.h>

void main() {
	printf("Hello World\n");
	printf("�������� �Է��ϼ���: ");

	char binary[30];
	//= "100000";
	scanf_s("%s", &binary, 30);

	int result = 0;

	for (int i  = 0; i < strlen(binary); i++) {
		if (binary[i] == '1') {
			result = result + square(i,strlen(binary));
		}
		//printf("%d\n", binary[i]-48);
	}

	printf("%s�� 10������ %d",binary,result);
}

int square(int n, int size) {
	
	int result = 1;
	for (int i = 0 ; i < (size-1) - n; i++) {
		result = result * 2;
	}
	return result;
}

