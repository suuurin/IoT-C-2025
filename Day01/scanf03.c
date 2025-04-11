//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    // 이름, 나이 입력받고 출력하기.
//
//    char name[50];  // 이름을 저장할 배열
//    int age;        // 나이를 저장할 변수
//
//    // 입력 받기
//    printf("이름과 나이를 입력하세요: ");
//    scanf("%s %d", &name, &age);
//
//    // 입력한 정보 출력
//    printf("\n%s, %d세입니다.", name, age);
//
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 나이, 이름 입력받고 출력하기
	int age;
	char name[50];

	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);

	printf("이름을 입력하세요: ");
	scanf_s("%s", name);

	printf("\n입력받은 나이와 이름은 %d, %s 입니다.", age, name);

	return 0;

}