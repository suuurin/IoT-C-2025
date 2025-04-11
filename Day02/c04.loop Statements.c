/* �ݺ� ��� 
1. for
2. while
3. do-while 
*/

#include <stdio.h>

int main() {
	// 1. for
	// for �� ���ѹݺ�
	// for(;;)
	int i1;
	for (i1 = 0; i1 < 11; i1++) {
		printf("i1: %d\n", i1);
	}
	printf("\n\n");		// ��� ������ ���� ����


	// 2. while
	int i2 = 0;
	while (i2 < 11) {
		printf("i2: %d\n", i2);
		i2++;
	}

	printf("\n\n");		// ��� ������ ���� ����

	// 3. do-while
	// ���ǿ� ������� ������ �� ���� ����
	int i3 = 0;

	do {
		printf("i3: %d\n", i3);
		i3++;
	} while (i3 < 11);
	
	printf("\n\n");		

	// while���� �̿��� 1 ~ 100 ������ ���� ���ض�~
	int num = 1;
	int sum = 0;		// �������� ������ ����
	while (num <= 100) {
		sum += num;
		num++;
	}
	printf("1~100������ ���� %d�Դϴ�.", sum);

	return 0;
}

/*
���̽�� ������
- �鿩���� ��� {}�߰�ȣ�� ����
- range() �Լ� x
- ;�� �����Ͽ� for(�ʱⰪ; ���ǽ�; ������) ������ �־�� ��
- do-while�� �߰�
*/

//python
/* for i in range(1, 10) */
// C
/* for (i=1; i<11; i++) */

// i++�� 



