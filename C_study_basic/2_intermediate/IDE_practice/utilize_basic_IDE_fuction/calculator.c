#include <stdio.h>
#pragma warning (disable:4996)

int my_addition(int num1, int num2) {
	return num1 + num2;
}

int my_substraction(int num1, int num2) {
	return num1 - num2;
}

int my_multiplication(int num1, int num2) {
	return num1 * num2;
}

int my_division(int num1, int num2) {
	return num1 / num2;
}

void main() {
	char my_calculation_option;
	int calculation_result = 0;
	int num1, num2;

	printf("===== ��Ģ���� ���� ver2 =====\n");
	printf("���ϴ� ������ �� ���� �����ϼ��� (ex: +,-,*,/): ");
	scanf("%c", &my_calculation_option);

	printf("�� ���� �Է��ϼ���(ex 3 4): ");
	scanf("%d %d", &num1, &num2);

	switch (my_calculation_option) {
	case '+':
		calculation_result = my_addition(num1, num2);
		break;
	case '-':
		calculation_result = my_substraction(num1, num2);
		break;
	case '*':
		calculation_result = my_multiplication(num1, num2);
		break;
	case '/':
		int count:
		for (count = 0 : count < 10000 : count++) {
			printf("step %d\n", count);
		}
		break;
	}
	printf("%d %c %d = %d", num1, my_calculation_option, num2, calculation_result);
}