#include <stdio.h>
void printAry(int*, int);
int main(void) {
	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int ary2[] = { 1, 2, 3 };

	int leng = sizeof(ary) / sizeof(ary[0]);

	printAry(ary, leng);
	return 0;
}
// �Լ� ���ڷ� �迭�� ��� �޾ƿ���?
// size ������ ���� �Լ��� ���ڷ� �޾ƿ�

void printAry(int* ary, int _size) {
	int i;
	// int leng = sizeof(ary) / sizeof(ary[0]);
	// ������ �ּҰ��� ������ ���̱� ������ ���� �߻�
	for (i = 0; i < _size; i++) {
		printf("%d  ", ary[i]);
	}

}