#include <stdio.h>
/* 대.소문자 변환 프로그램 */

//	1. 문자 하나 입력받음
//	2. 대문자일 경우 소문자 변경, 소문자일 경우 대문자 변경 
//	참고) A: 65 ~ Z: 90
//		  a: 97 ~ z: 122 

char trans_alpha(char);

int main(void) {
	char alph[10];	// 문자 입력받을 변수
	char res = 0;
	while (1)
	{
		


		printf("문자를 하나 입력해주세요 > ");
		scanf_s("%s", alph, 10);
		// 오류 발생 scanf_s 에서 마지막 인자로 크기를 전달해야 하는데 sizeof()는 안됨
		/* 문자열 quit 입력받으면 입력 종료되도록 */
		if (alph == 'quit')
		{
			printf("프로그램 종료합니다.");
			break;
		}
		while (getchar() != '\n');		// 입력버퍼 오류 방지
		printf("변환결과: %c\n\n", trans_alpha(alph));
	}

	return 0;
}

/* 대소문자 변환 함수 */
char trans_alpha(char* alph)
{
	const int TRANS_ALPH = 'a' - 'A';
	char res = 0;
	if (('a' <= alph[0]) && ('z' >= alph[0]))	// 소문자이면
	{
		res = alph[0] - TRANS_ALPH;
	}
	else if (('A' <= alph[0]) && ('Z' >= alph[0]))	// 대문자이면 
	{
		res = alph[0] + TRANS_ALPH;
	}

	return res;
}