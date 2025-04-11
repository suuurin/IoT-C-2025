/* 1. 구구단 출력하기*/
#include <stdio.h> {
int main() {
	int i, j;
	for (i=2; i < 10; i++) {
		printf("%d단\n", i);
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n\n");

	}
	/* 2. 원하는 단 입력 받아서 해당 단만 출력하기*/
	int dan;
	printf("몇 단을 출력할까? > ");
	scanf_s("%d", &dan, sizeof(dan));
	for (i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}
	return 0;
}

