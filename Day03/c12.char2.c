#include <stdio.h>

int main(void) {
	//int ch;
	char ch;

	ch = getchar();				// �� ���ڸ� �о���� �Լ�
	printf("input: %d\n", ch);
	putchar(ch);				// �� ���ڸ� ����ϴ� �Լ�
	//putchar(ch\n);			// ����


	putchar(ch);				
	putchar('\n');
	printf("input: %d\n", ch);

	return 0;
}