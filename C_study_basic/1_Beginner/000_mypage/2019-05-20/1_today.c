#include <stdio.h>

void main() {
	int num[5];
	int ��;
	int �ִ�, �ּ�, ��;


	for (�� = 0; �� < 5; ��++) {
		printf("%d ���� �Է�: ", ��+1);
		scanf("%d", &num[��]);
	}
	
	�ִ� = �ּ� = �� = num[0];
	for (�� = 1; �� < 5; ��++) {
		�� += num[��];
		if (�ִ� < num[��])
			�ִ� = num[��];
		if (�ּ� > num[��])
			�ּ� = num[��];
	}
	printf("�ִ밪 = %d\n", �ִ�);
	printf("�ּҰ� = %d\n", �ּ�);
	printf("�� = %d\n", ��);
}

