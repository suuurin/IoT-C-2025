#include <stdio.h>
// 정수 입력을 5개 받아 배열에 저장하시오
int main(void) {
	/*int size;
	printf("배열의 크기를 입력해주세요 > ");
	scanf_s("%d", &size);
	int arr[size];*/ // MSVC에서는 VLA를 지원하지 않음
	// 문제를 해결하기 위해서는 
	// 1. 동적 메모리 할당(malloc)
	// 2. 정적 배열 사용 
	int i;
	int arr[5];
	int res_sum = 0;
	for (i = 1; i < 6; i++) {
		printf("%d번째 숫자를 입력하세요 > ", i);
		scanf_s("%d", &arr[i - 1], sizeof(int));
	}
	printf("배열 결과: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("배열의 합: ");
	for (i = 0; i < 5; i++) {
		res_sum += arr[i];
	}
	printf("%d\n", res_sum);

	printf("배열의 평균: ");
	printf("%d\n", res_sum / (sizeof(arr) / sizeof(arr[0])));
	printf("11\n");
	printf("%.2lf", (double)res_sum / (sizeof(arr) / sizeof(arr[0])));
	// (double)붙이지 않았을 때 왜 0.00 결과가 나오지?
	// → 서식문자를 잘못 입력했기 때문이였다,,
	// 변수 타입에 맞지 않는 서식문자를 입력하면 0 or 이상한 값 출력됨
	return 0;
}