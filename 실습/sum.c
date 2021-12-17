#include <stdio.h>
#include<string.h>

int main() {
	printf("Hello_World\n");
	char numbers[30];
	scanf_s("%s", numbers, sizeof(numbers));
	int len = strlen(numbers);

	int result = sum(len, numbers);

	for (int i = 0; i < len; i++) {
		if (i == len - 1) {
			printf("%c의 합은 %d입니다.", numbers[i], result);
		}
		else{
			printf("%c + ", numbers[i]);
		}
	}
}

int sum(int len, char numbers[30]) {
	
	int result = 0;
	
	for (int i = 0; i < len; i++) {
		result = result + numbers[i];
	}
	result = result - (48 * (len));
	//ascii code 값을 10진수로 변환
	return result;
}