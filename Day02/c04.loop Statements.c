/* 반복 제어문 
1. for
2. while
3. do-while 
*/

#include <stdio.h>

int main() {
	// 1. for
	// for 문 무한반복
	// for(;;)
	int i1;
	for (i1 = 0; i1 < 11; i1++) {
		printf("i1: %d\n", i1);
	}
	printf("\n\n");		// 결과 구분을 위한 개행


	// 2. while
	int i2 = 0;
	while (i2 < 11) {
		printf("i2: %d\n", i2);
		i2++;
	}

	printf("\n\n");		// 결과 구분을 위한 개행

	// 3. do-while
	// 조건에 상관없이 무조건 한 번은 실행
	int i3 = 0;

	do {
		printf("i3: %d\n", i3);
		i3++;
	} while (i3 < 11);
	
	printf("\n\n");		

	// while문을 이용해 1 ~ 100 까지의 합을 구해라~
	int num = 1;
	int sum = 0;		// 누적합을 저장할 변수
	while (num <= 100) {
		sum += num;
		num++;
	}
	printf("1~100까지의 합은 %d입니다.", sum);

	return 0;
}

/*
파이썬과 차이점
- 들여쓰기 대신 {}중괄호로 구분
- range() 함수 x
- ;로 구분하여 for(초기값; 조건식; 증감식) 지정해 주어야 함
- do-while문 추가
*/

//python
/* for i in range(1, 10) */
// C
/* for (i=1; i<11; i++) */

// i++과 



