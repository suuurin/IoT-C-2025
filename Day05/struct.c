/*  
	struct 1 ~ 5
	struct(구조체) - 사용자 정의 자료형
	기존 자료형을 묶어서 만든 복합 자료형(type)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Human {			// 구조체 선언 struct 구조체명
	char name[100];		// 멤버 변수
	int age;			// 멤버 변수
};

struct mystruct {
	char name[20];
	int age;
	double height;
	char* str;
};

struct profile {
	int age;
	double height;
	double weight;
};

struct student {
	struct profile pf;
	int id;
	double grade;
};

typedef int int32mt;  // 'int' 타입을 'int32mt'라는 새로운 이름으로 정의

struct human {
	char name[100];
	int32mt age;		// int 대신 사용 가능
};

typedef struct myst2 {
	int a;
	int b;
}Myst;	// Myst로 별명 

// vision 구조체: 왼쪽, 오른쪽 시력 저장
typedef struct vision {
	double left;
	double right;

	// void move() {};			// C++: 구조체 안에 함수를 넣어?! 구조체 안에 멤버 함수(method)도 넣을 수 있따? : typedef struct = class로 변경
}Vision;

Vision exchange(Vision);		// 입력한 시력을 저장하는 함수 원형

int main() {

	//=========== 구조체(1) Human ===========

	/* . 멤버 접근연산자*/
	struct Human h;		// Human 구조체의 변수 h 선언 (타입이 Human, 변수 이름이 h)
	h.age = 30;			// h객체의 멤버 age에 30을 저장한다.
	//h.name = "김수린";
	strcpy(h.name, "김수린");

	//char str[100] = "김수린";
	//printf("%s\n", str);
	//char str2[100];
	////str2 = "김철수";
	////*str2[0] = "김철수";

	//str2[0] = 'h';
	//str2[1] = 'o';
	//...
	//	str2[10] = '\0';

	printf("나의 이름은 %s이고 나이는 %d입니다.\n", h.name, h.age);
	printf("====================================\n");

	//=========== 구조체(2) mystruct ===========
	struct mystruct myst;
	strcpy(myst.name, "김수린");
	myst.age = 23;
	myst.height = 160;
	myst.str = (char*)malloc(sizeof(100));

	printf("인사말: ");
	//gets(myst.str);		// 인사말 입력 받기

	printf("  이름: %s\n", myst.name);
	printf("  나이: %d\n", myst.age);
	printf("    키: %.1f\n", myst.height);
	printf("인사말: %s\n", myst.str);
	printf("====================================\n");


	free(myst.str);

	//=========== 구조체(3) profile, student ===========
	struct student s;
	s.grade = 99;
	s.id = 202222339;
	s.pf.age = 23;
	s.pf.height = 160;
	s.pf.weight = 50;

	printf("키: %.1lf\n", s.pf.height);
	printf("몸무게: %.1lf\n", s.pf.weight);
	printf("나이: %d\n", s.pf.age);
	printf("아이디: %d\n", s.id);
	printf("성적: %.1f\n", s.grade);
	printf("====================================\n");


	//=========== 구조체(4) human, myst2 ===========
	//struct human hm = { "홍길동", 100 };
	//struct human hm2 = { "강감찬", 100 };
	struct human hm = { "홍길동", 100 },
				 hm2 = { "이순신", 110 },
			  	 hm3 = { "김유신", 200 };

	Myst m;

	//=========== 구조체(5) vision ===========
	Vision rot;		// Vision 구조체 변수 rot 선언

	printf("시력 입력 (왼 오) >> ");
	scanf("%lf%lf", &rot.left, &rot.right);	// 왼, 오 시력 입력받기

	// 새로운 시력 값 저장
	rot = exchange(rot);	// rot 새로운 값으로 저장
							// exchange(rot) : 구조체 변수도 매개변수로 사용 가능하다.

	printf("바뀐 시력: %.1lf, %.1lf\n", rot.left, rot.right);

	return 0;
}

Vision exchange(Vision v) {		// 구조체 사용해 하나의 인자로 넘길 수 있다.
	Vision temp;		// Vision 구조체 변수 temp 선언
	temp.left = v.left;		// 입력받은 값 temp.left, temp.right에 저장
	temp.right = v.right;

	return temp;		// temp 구조체 반환

}