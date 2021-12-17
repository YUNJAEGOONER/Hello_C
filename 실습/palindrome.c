#include <stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {

	//printf("Hell_World\n");
	char str[30];
	scanf_s("%s", str, sizeof(str));
	int len = strlen(str);

	int result = decision(len, str);

	if (result == 1) {
		printf("%s는 회문이 아닙니다\n", str);
	}
	else {
		printf("%s는 회문입니다\n", str);
	}

}


int decision(int len, char str[30]) {
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[(len - 1) - i]) {
			return 1;
		}
	}
}