#include <stdio.h>

int main(void) {

	int arr[] = { 1, 2, 3 };

	printf("�迭�� ��üũ��: %d\n", sizeof(arr));
	printf("�迭 �� �� ���� ũ��: %d\n", sizeof(arr[0]));
	printf("�迭�� ���� ����: %d\n", sizeof(arr) / sizeof(arr[0]));	// C����  length �Լ� ����
	printf("�迭 �̸�: %p\n", arr);						// �迭�� ���� �޸� �ּ�
	printf("�迭 ù ��° �� �ּ�: %p\n", &arr[0]);		// �迭�� ù ��° �� �ּ�
	printf("%p\n", arr + 1);							// �� ��° �� �ּ�
	printf("�迭 �� ��° �� �ּ�: %p\n", &arr[1]);
	// arr + 1 == &arr[1]
	return 0;
}