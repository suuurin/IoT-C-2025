#include <stdio.h>
void printAry(int*, int);
int main(void) {
	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int ary2[] = { 1, 2, 3 };

	int leng = sizeof(ary) / sizeof(ary[0]);

	printAry(ary, leng);
	return 0;
}
// 함수 인자로 배열을 어떻게 받아오지?
// size 변수를 같이 함수의 인자로 받아옴

void printAry(int* ary, int _size) {
	int i;
	// int leng = sizeof(ary) / sizeof(ary[0]);
	// 포인터 주소값을 나누는 것이기 때문에 오류 발생
	for (i = 0; i < _size; i++) {
		printf("%d  ", ary[i]);
	}

}