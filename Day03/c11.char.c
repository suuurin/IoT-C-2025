#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char ch1;
	char ch2;

	scanf("%c%c", &ch1, &ch2);
	scanf(" %c %c", &ch1, &ch2);		// %c�տ� ������ �־� ���๮�� ����ȭ


	printf("[%c%c]", ch1, ch2);

	return 0;
}