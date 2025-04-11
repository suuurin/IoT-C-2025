#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char ch1;
	char ch2;

	scanf("%c%c", &ch1, &ch2);
	scanf(" %c %c", &ch1, &ch2);		// %c앞에 공백을 주어 개행문자 무력화


	printf("[%c%c]", ch1, ch2);

	return 0;
}