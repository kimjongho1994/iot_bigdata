#include <stdio.h>
#pragma warning (disable:4996)

int SimpleFunc1(void) {
	int num = 5;
	num++;
	printf("SimpleFuncr1] num: %d \n", num);
	return num;
}

// �Լ��� ����(Argument) �Ǵ� �ŰԺ���, �Ķ����(Parameter)��
// ���������� ����. ���� ���� �޾��� �� �ٸ� �����̸�
// �Լ� ������ ���� ��� �Ҹ�ȴ�. (�޸𸮻󿡼� �������.)
int SimpleFunc2(int num) {
	num++;
	printf("SimpleFunc2] num: %d \n", num);
	// �Լ� ���� local variable�� ȣ�� ����� ��� ���� �ٸ� scope�̴�.
	// printf("main] result: %d\n", result);
	return num;
}
void main() {
	int num = 17;
	int result = 0;
	result = SimpleFunc1();
	printf("main] num: %d\n", num);
	result = SimpleFunc2(num);
	printf("main] num: %d\n", num);
	printf("main] result: %d\n", result);
}