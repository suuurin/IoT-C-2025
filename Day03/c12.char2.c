#include <stdio.h>

int main(void) {
	//int ch;
	char ch;

	ch = getchar();				// 한 문자를 읽어오는 함수
	printf("input: %d\n", ch);
	putchar(ch);				// 한 문자를 출력하는 함수
	//putchar(ch\n);			// 오류


	putchar(ch);				
	putchar('\n');
	printf("input: %d\n", ch);

	return 0;
}