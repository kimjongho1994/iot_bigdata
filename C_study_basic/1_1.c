#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num[5];
	int ��
	int �ִ�, �ּ�, ��

	pritnf("������ 5�� �Է��ϼ���: ");
	scanf("%d %d %d %d %d",
		&num[]);

	for (�� = 0; �� < 5; ��++) {
		printf("%d ���� �Է�: ", ��+1);
	}
	
	�ִ� = �ּ� = �� = num[0];
	for (�� = 1; �� < 5; ��++) {
		�� += num[��];
		if (�ִ� < num[��])
			�ִ� = num[��];
		if (�ּ� > num[��])
			�ּ� = num[��];
	}
	printf("%d = �ִ밪", �ִ�);
	printf("%d = �ּڰ�", �ּ�);
	printf("%d = ��", ��);
}
