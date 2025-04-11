#include <stdio.h>

int main(void) {

	int arr[] = { 1, 2, 3 };

	printf("배열의 전체크기: %d\n", sizeof(arr));
	printf("배열 방 한 개의 크기: %d\n", sizeof(arr[0]));
	printf("배열의 방의 개수: %d\n", sizeof(arr) / sizeof(arr[0]));	// C언어에는  length 함수 없다
	printf("배열 이름: %p\n", arr);						// 배열의 시작 메모리 주소
	printf("배열 첫 번째 방 주소: %p\n", &arr[0]);		// 배열의 첫 번째 방 주소
	printf("%p\n", arr + 1);							// 두 번째 방 주소
	printf("배열 두 번째 방 주소: %p\n", &arr[1]);
	// arr + 1 == &arr[1]
	return 0;
}