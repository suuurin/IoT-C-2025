#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int, int);
int minus(int, int);
int div(int, int);
int product(int, int);

int main() {
	int num1 = 0;
	int num2 = 0;		// �ǿ����� ���� ����
	char oper;			// ������ ���� ����
	int res;			// ����� ���� ����
	printf("���� ���α׷��Դϴ�.\n");
	while (1) {
		printf("ù ��° ������ �Է��ϼ���. (�Է�����:q) > ");
		if (scanf("%d", &num1) != 1) {
			while (getchar() != '\n');
			break;	// ������ ������ ��ȣ�ȿ� �־�� ��
		}
		printf("�� ��° ������ �Է��ϼ���. > ");
		scanf("%d", &num2);
	
		// printf("%d %d", num1, num2);	// �� �Է� Ȯ�� ok
		printf("�����ڸ� �Է��ϼ���. > ");
		scanf(" %c", &oper);		// "%c"�� �ϸ� ���� �� " %c" �� �Է��ϸ� ����x
									// ���� ã�ƺ� ��
									// Question.md ���� Ȯ���� ��
		if (num2 == 0 && oper == '/') {
			printf("0���� ���� �� �����ϴ�.\n");
			printf("�ٽ� �Է����ּ���.\n");
			continue;
		}
		if (oper == '+') res = add(num1, num2);
		else if (oper == '-') res = minus(num1, num2);
		else if (oper == '/') res = div(num1, num2);
		else if (oper == '*') res = product(num1, num2);
		else {
			printf("�����ڸ� �߸��Է��߽��ϴ�.\n");
			printf("�Է�â���� �ٽ� ���ư��ϴ�.\n");
			continue;
		}

		printf("������ ����� %d �Դϴ�.\n\n", res);
	}

	return 0;
}
/* ���� �Լ�*/
int add(int num1, int num2) {
	// return num1 + num2; �̰� ���̽� ���. ���� ���� ���� return �ؾߵ�
	int res = num1 + num2;
	return res;
}
/* ���� �Լ�*/
int minus(int num1, int num2) {
	int res = num1 - num2;
	return res;
}
/* ������ �Լ�*/
int div(int num1, int num2) {
	int res = num1 / num2;
	return res;
}
/* ���� �Լ�*/
int product(int num1, int num2) {
	int res = num1 * num2;
	return res;
}
