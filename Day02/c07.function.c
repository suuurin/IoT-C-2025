#include <stdio.h>

// 사용자 함수를 정의할 때에는 main 함수 위에 함수 선언을 한 후
// main 함수 아래에 함수 정의를 한다.

void func1();			// 함수선언, 함수원형 
void func2(int, int);	// 함수선언, 함수원형
int func3(int, int);	// 함수선언, 함수원형

int main() {
	func1();				// 함수 호출
	func2(10, 20);			// 10과 20은 실인수
	printf("int func3(int, int), a + b = %d\n", func3(10, 20));
	return 0;
}

/*	func1()
	입력과 출력이 없는 함수
	함수 안에서 결과를 출력한다.
*/
void func1() {			// 함수 정의: 함수의 기능을 여기에 작성한다.
	int a = 10, b = 20;
	printf("void func1(), a + b = %d\n", a + b);
}
/*	func2()
	입력이 있는 함수 */
void func2(int n1, int n2) {
	//n1과 n2 는 지역변수
	printf("void func2(int, int), a + b = %d\n", n1 + n2);

}
/*	func3()
	입력과 출력이 있는 함수 */
int func3(int num1, int num2) {
	int res = num1 + num2;
	return res;
}

