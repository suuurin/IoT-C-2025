/*
	�Է� - scanf()
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//int inputVal;

	//printf("������ �Է��ϼ���: ");
	//scanf("%d", &inputVal);		// & �ּҿ�����

	//printf("�Է��� ������ %d �Դϴ�!\n", inputVal);

	int n1, n2;
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf_s("%d %d", &n1, &n2);

	printf("�Է��� ������ %d, %d �Դϴ�!!", n1, n2);
	return 0;
}