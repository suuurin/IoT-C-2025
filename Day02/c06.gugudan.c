/* 1. ������ ����ϱ�*/
#include <stdio.h> {
int main() {
	int i, j;
	for (i=2; i < 10; i++) {
		printf("%d��\n", i);
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n\n");

	}
	/* 2. ���ϴ� �� �Է� �޾Ƽ� �ش� �ܸ� ����ϱ�*/
	int dan;
	printf("�� ���� ����ұ�? > ");
	scanf_s("%d", &dan, sizeof(dan));
	for (i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}
	return 0;
}

