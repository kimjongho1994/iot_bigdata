#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num1 = 0;
	int num2;

	printf("���� �Է�: ");
	scanf("%d", &num2);

	while (num1 < num2) {
		printf("Hello world!");
		num1++;
	}
}