#include <stdio.h>
void swap(int*, int*);
int main() {

	//swap - �� ���� �ٲٴ� �˰���
	// a, b = b, a �� ���� ���� ����
	int a = 10;
	int b = 20;
	printf("���� �� a: %d, b: %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("���� �� a: %d, b: %d\n", a, b);

	// ������ ��� swap
	swap(&a, &b);
	printf("�ѹ� �� ���� �� a: %d, b: %d\n", a, b);

	return 0;
}
// �����͸� ������� ������ �����ؼ� ������ ������
// �Լ� swap �������� �����
void swap(int* a, int* b) {
	int* tmp = *a;
	*a = *b;
	*b = tmp;
}