/* 상수 */
#include <stdio.h>

int main() {

	int r = 10;
	const double pi = 3.14;
	double cf = 2 * pi * r;

	// pi = 3.14
	double* dp = &pi;
	*dp = 4.0;
	
	printf("원둘레: %.2lf\n", cf);
	printf("pi: %.2lf", pi);

	return 0;
}