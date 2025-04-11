/*
	�޸� ���� �Ҵ�: malloc - free
	 malloc - �޸� ���� �Ҵ��ϰ�, �Ҵ�� �޸��� ù ��° �ּҸ� ��ȯ�Ѵ�. �ʱ�ȭX
	 calloc - �޸� ���� �Ҵ��ϰ�, �Ҵ�� �޸��� ��� ���� 0���� �ʱ�ȭ
	realloc - �̹� �Ҵ�� �޸��� ũ�� ����
	   free - �޸� ����

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		//malloc, free, exit �Լ� ����� ���� �߰�

int main() {
	// ====== malloc(1)======
	// �� ������ �Է�ũ�⸸ŭ �޸� ������ �Ҵ� �޾Ƽ� ���� �ּҸ� �����Ѵ�.
	int* pi = (int*)malloc(sizeof(int));		// 1. malloc �Լ��� int ũ�⸸ŭ ���� �޸� �Ҵ�
												// 2. sizeof(int)�� int ������ ũ��(4byte)��ŭ �޸𸮸� ��û
												// 3. malloc�� void* Ÿ���� ��ȯ�ϹǷ� �̸� int* Ÿ������ ����ȯ
												// 4. ��ȯ�� int* Ÿ���� �����͸� pi�� ����

	//malloc�� NULL ��ȯ�ϸ� �޸� �Ҵ� ���и� �ǹ��ϹǷ� üũ
	if (pi == NULL) {
		printf("�޸� �Ҵ� ����");
		exit(1);		// �޸� �Ҵ� ���н� ���α׷� ����
	}
	printf("�Ҵ� ����!!\n\n");

	free(pi);			// �Ҵ�� �޸� ���� - ���� �Ҵ�� �޸𸮴� ����� ������ free�� �����ؾ� ��


	// ====== malloc(2)======
	char str[100];
	char* ps;

	printf("���ڿ��� �Է��ϼ���>> ");
	gets(str);
	printf("�Է��� ���ڿ�: %s\n", str);

	ps = (char*)malloc(strlen(str) + 1);		// �Էµ� ���ڿ��� ������ ������ �� �������� �Ҵ�޴´�.
	if (ps == NULL) {
		exit(1);
	}
	
	// ���ڿ� ����
	strcpy(ps, str);					
	printf("heap: %s\n", ps);

	// ���� �޸� ��ȯ
	free(ps);				

	//==========================

	return 0;
}