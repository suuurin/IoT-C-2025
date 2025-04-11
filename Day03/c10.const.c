#include <stdio.h>

int main(void) {
	const int num = 10;
	// num = 20;

	int num2 = 10;
	num2 = 20;
	int* pnum2 = &num2;
	*pnum2 = 30;
	printf("%d\n", num2);

	const int* pn2 = &num2;		// 데이터 상수(
								// 포인터 변수를 통한 데이터의 변경을 불허한다.
	int const* pn2 = &num2;		// 같은 의미
	num2 = 0;
	//*pn2 = 100;		// 값 변경시 오류 발생
	pn2 = &num2;		// 이건 가능

	int num3 = 40;
	int* const pnum3 = &num3;	// 포인터 상수
								// 포인터변수가 가리키는 주소의 변경을 불허한다.
	*pnum3 = 100;		// 가능
	printf("%d\n", num3);
	//pnum3 = &num2;	// 오류 발생


	// 데이터, 포인터 모두 변경 불가능한 상수 선언
	const int* const pn5 = &num2;
	//*pn5 = 100
	//pn5 = &num3
	// 둘 다 불가능
	// num2를 직접 접근하여 변경은 가능
	num2 = 60;

	return 0;
}