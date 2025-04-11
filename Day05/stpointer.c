/*
	stpointer ~ stArray
	구조체 포인터: 구조체 변수의 메모리 주소를 저장하는 포인터
	구조체 변수가 메모리에서 차지하는 위치를 가리키는 포인터로, 이를 통해 구조체 내부의 멤버들에 접근할 수 있다.

	구조체 변수를 통해서 멤버에 접근하는 방법은? .(멤버접근 연산자)
	구조체 포인터를 통해서 멤버에 접근하는 방법은? ->(화살표 연산자, 애로우연산자)
*/
#include <stdio.h>

// 성적 정보 구조체
typedef struct score {
	int kor;
	int eng;
	int mat;
} Score;

// 주소 정보 구조체
typedef struct addr {
	char name[20];
	int age;
	char tel[20];
	char addr[100];
} Addr;

//리스트 출력 함수 원형
void print_list(Addr* list);

int main() {
	//============== stpointer ================
	Score s = { 100, 80, 85 };		// Score 구조체 변수 선언 및 초기화
	Score* ps = &s;					// 구조체 포인터 ps에 s의 주소 할당

	// 구조체 포인터를 사용하여 멤버에 접근
	printf("국어: %d\n", ps->kor);
	printf("영어: %d\n", ps->eng);
	printf("수학: %d\n", (*ps).mat);	// 수학 점수 출력 (ps 포인터를 통해 접근)

	//============== stArray ================
	Addr list[3] = {		// Addr 구조체 배열 선언 및 초기화
		{ "홍길동", 100, "010-1111-1111", "몰라" },
		{ "김철수", 33, "010-2222-2222", "부산" },
		{ "김영희", 24, "010-3333-3333","울산" }
	};

	// 구조체 배열 출력 함수 호출
	print_list(list);

	return 0;

}// 구조체 배열을 받아 출력하는 함수
void print_list(Addr* list) {
	for (int i = 0; i < 3; i++) {
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);		// list[i]로 각 구조체 요소에 접근하고 출력
	}
	
}