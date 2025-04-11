#include <stdio.h>
void swap(int*, int*);
int main() {

	//swap - 두 값을 바꾸는 알고리즘
	// a, b = b, a 와 같은 문법 없음
	int a = 10;
	int b = 20;
	printf("변경 전 a: %d, b: %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("변경 후 a: %d, b: %d\n", a, b);

	// 포인터 사용 swap
	swap(&a, &b);
	printf("한번 더 변경 후 a: %d, b: %d\n", a, b);

	return 0;
}
// 포인터를 사용하지 않으면 복사해서 들고오기 때문에
// 함수 swap 내에서만 변경됨
void swap(int* a, int* b) {
	int* tmp = *a;
	*a = *b;
	*b = tmp;
}