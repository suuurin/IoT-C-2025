#include <stdio.h>
/* 포인터 */
/*
* 포인터 변수: 주소를 저장할 수 있는 변수
* 크기: 32bit - 4byte/ 64bit - 8byte
* 포인터 변수는 자료형에 따라 달라지지 않는다 주소의 크기가 일정하기 때문
*/
int main(void) {
	// int p;		// int형 변수 선언
	// int* p;		// int형 포인터 변수 선언
	// char* pc;	// char형 포인터 변수 선언
	// 포인터 변수 선언에서 *은 포인터 형임을 나타내는 것. 아무런 기능 없음
	// double * pd;
	// double *pd;
	// double* pd;
	// *의 위치는 상관없음 

	int num = 10;
	printf("num의 주소: %p\n", &num);
	printf("num의 값: %d\n", num);
	int* p = &num;		// num의 주소값을 int형 포인터변수인 p에 저장
	printf("포인터변수 p에 저장된 값: %p \n", p);
	printf("포인터 변수p가 가리키고 있는 값: %d\n", *p);		// 여기서 *는 간접참조 연산자
	
	num += 1;
	printf("num :%d, *p: %d\n", num, *p);
	*p += 1;
	printf("num :%d, *p: %d\n", num, *p);

	// static 변수
	//전역적/ 지역적

	return 0;
}