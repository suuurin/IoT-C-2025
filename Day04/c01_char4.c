//#include <stdio.h>
//
//void myStrInput(char* ps, int size);
//
//int main() {
//
//	char str[100];				// 문자열 저장할 배열
//
//	myStrInput(str, 100);			
//	printf("입력한 문자열: %s\n", str);
//
//	return 0;
//
//}
//
//void myStrInput(char* ps, int size) {
//
//	int i = 0;
//	while (1) {
//		ps[i] = getchar();
//		if (ps[i] == '\n' || i >= (size - 1)) break;
//		i++;
//	}
//	ps[i] = '\0';
//}
//
//
