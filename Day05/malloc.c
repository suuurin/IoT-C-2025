/*
	메모리 동적 할당: malloc - free
	 malloc - 메모리 동적 할당하고, 할당된 메모리의 첫 번째 주소를 반환한다. 초기화X
	 calloc - 메모리 동적 할당하고, 할당된 메모리의 모든 값을 0으로 초기화
	realloc - 이미 할당된 메모리의 크기 변경
	   free - 메모리 해제

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		//malloc, free, exit 함수 사용을 위해 추가

int main() {
	// ====== malloc(1)======
	// 힙 영역에 입력크기만큼 메모리 공간을 할당 받아서 시작 주소를 리턴한다.
	int* pi = (int*)malloc(sizeof(int));		// 1. malloc 함수로 int 크기만큼 동적 메모리 할당
												// 2. sizeof(int)는 int 변수의 크기(4byte)만큼 메모리를 요청
												// 3. malloc은 void* 타입을 반환하므로 이를 int* 타입으로 형변환
												// 4. 반환된 int* 타입의 포인터를 pi에 저장

	//malloc이 NULL 반환하면 메모리 할당 실패를 의미하므로 체크
	if (pi == NULL) {
		printf("메모리 할당 실패");
		exit(1);		// 메모리 할당 실패시 프로그램 종료
	}
	printf("할당 성공!!\n\n");

	free(pi);			// 할당된 메모리 해제 - 동적 할당된 메모리는 사용이 끝나면 free로 해제해야 함


	// ====== malloc(2)======
	char str[100];
	char* ps;

	printf("문자열을 입력하세요>> ");
	gets(str);
	printf("입력한 문자열: %s\n", str);

	ps = (char*)malloc(strlen(str) + 1);		// 입력된 문자열을 저장할 공간을 힙 영역에서 할당받는다.
	if (ps == NULL) {
		exit(1);
	}
	
	// 문자열 복사
	strcpy(ps, str);					
	printf("heap: %s\n", ps);

	// 동적 메모리 반환
	free(ps);				

	//==========================

	return 0;
}