/* 연산자 */

#include <stdio.h>
int main() {
	int res;
	int n = 15;
	// 논리 연산자 &&, ||, !
	// -파이썬과 달리 and, or , not 키워드 없음
	// - &, | 한 번만 쓰면 비트 연산자이므로 주의
	printf("======논리연산자======\n");
	res = (n < 10) && (n > 20);
	printf("res: %d\n", res);
	res = (n < 10) || (n > 20);
	printf("res: %d\n", res);
	res = !(n >= 30);
	printf("res: %d\n", res);
	printf("======증감연산자======\n");

	// 증감연산자 ++, --
	int num = 5;
	printf("num: %d\n", num);
	printf("전위증가 후 num: %d\n", ++num);	// num += 1 을 한 후 출력
	printf("후위증가 후 num: %d\n", num++);	// num 출력 후 num += 1
	printf("num: %d\n", num);					// num에 1 더해져있는 것을 확인할 수 있다. 
	// -- 도 동일원리
	printf("======삼항연산자======\n");
	// 삼항연산자 :?
	// 조건 ? 참 : 거짓
	// if(조건) 참; else 거짓값; 을 한 줄로

	int a = 8;
	int b = 45;
	res = a > b ? a : b;
	printf("a와 b 중 더 큰 값은: %d\n", res);
	printf("======비트연산자======\n");

	// 비트연산자 (&, |, ~, >>, <<)

	res = 3 & 11;
	printf("& res: %x\n", res);

	res = 3 | 11;
	printf("| res: %x\n", res);

	res = ~6;
	printf("~ res: %d\n", res);
	printf("======쉬프트연산======\n");

	char ch = 0x7f;					// 0b 0111 1111
	unsigned char uch = 0x7f;
	printf("ch: %x, uch: %x\n", ch, uch);

	char ch1 = 0x9f;				// 0b 1001 1111
	unsigned char uch1 = 0x9f;
	printf("ch1: %x, uch1: %x\n", ch1, uch1);

	ch1 >>= 1;						// 0b 1100 1111
	uch >>= 1;						// 0b 0100 1111
	printf("ch1: %x, uch1: %x\n", ch1, uch1);
	printf("======sizeof연산자======\n");

	// sizeof 연산자
	printf("char의 크기는 %d\n", sizeof(char));
	printf("int의 크기는 %d\n", sizeof(int));
	printf("float의 크기는 %d\n", sizeof(float));
	printf("double의 크기는 %d\n", sizeof(double));

	return 0;
}


