#include <stdio.h>

int main() {
	int i = 0;
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0) continue;	// continue; ���� �ݺ��� �ǳʶٰ� ���� �ݺ����� �Ѿ
		// if (i==7) break;	// break; �ݺ�����
		if (i >= 7) break;	// 7�ຸ�� ���� ���� ����
							// ���� �߻� ���� �� �ֱ� ����.
		printf("%d\n", i);
	}

	return 0;
}
