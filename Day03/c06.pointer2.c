#include <stdio.h>

int main() {
	char ch;
	int n;
	char* pch = &ch;
	int* pn = &n;

	printf("char 주소 크기: %d\t", sizeof(&ch));
	printf("int 주소 크기: %d\n", sizeof(&n));
	printf("char 포인터 크기 %d\t", sizeof(pch));
	printf("int 포인터 크기 %d\n", sizeof(pn));

	/* 참고
	1byte -> 8bit

	
	*/

	return 0;
}