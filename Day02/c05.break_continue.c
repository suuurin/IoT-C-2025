#include <stdio.h>

int main() {
	int i = 0;
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0) continue;	// continue; 현재 반복을 건너뛰고 다음 반복으로 넘어감
		// if (i==7) break;	// break; 반복종료
		if (i >= 7) break;	// 7행보다 좋은 종료 조건
							// 예외 발생 줄일 수 있기 때문.
		printf("%d\n", i);
	}

	return 0;
}
