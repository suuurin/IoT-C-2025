#include <stdio.h>
// ���� �Է��� 5�� �޾� �迭�� �����Ͻÿ�
int main(void) {
	/*int size;
	printf("�迭�� ũ�⸦ �Է����ּ��� > ");
	scanf_s("%d", &size);
	int arr[size];*/ // MSVC������ VLA�� �������� ����
	// ������ �ذ��ϱ� ���ؼ��� 
	// 1. ���� �޸� �Ҵ�(malloc)
	// 2. ���� �迭 ��� 
	int i;
	int arr[5];
	int res_sum = 0;
	for (i = 1; i < 6; i++) {
		printf("%d��° ���ڸ� �Է��ϼ��� > ", i);
		scanf_s("%d", &arr[i - 1], sizeof(int));
	}
	printf("�迭 ���: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("�迭�� ��: ");
	for (i = 0; i < 5; i++) {
		res_sum += arr[i];
	}
	printf("%d\n", res_sum);

	printf("�迭�� ���: ");
	printf("%d\n", res_sum / (sizeof(arr) / sizeof(arr[0])));
	printf("11\n");
	printf("%.2lf", (double)res_sum / (sizeof(arr) / sizeof(arr[0])));
	// (double)������ �ʾ��� �� �� 0.00 ����� ������?
	// �� ���Ĺ��ڸ� �߸� �Է��߱� �����̿���,,
	// ���� Ÿ�Կ� ���� �ʴ� ���Ĺ��ڸ� �Է��ϸ� 0 or �̻��� �� ��µ�
	return 0;
}