#include <stdio.h>

int main() {
	char ch;
	int n;
	char* pch = &ch;
	int* pn = &n;

	printf("char �ּ� ũ��: %d\t", sizeof(&ch));
	printf("int �ּ� ũ��: %d\n", sizeof(&n));
	printf("char ������ ũ�� %d\t", sizeof(pch));
	printf("int ������ ũ�� %d\n", sizeof(pn));

	/* ����
	1byte -> 8bit

	
	*/

	return 0;
}