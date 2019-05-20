#include <stdio.h>

void main (){
	int input_num1, input_num2;

	printf("첫번째 수를 입력하세요: ");
	scanf("%d", &input_num1);
	printf("두번째 수를 입력하세요: ");
	scanf("%d", &input_num2);

	printf("%d+%d=%d\n", input_num1,input_num2, input_num1+input_num2);
	printf("%d-%d=%d\n", input_num1,input_num2, input_num1-input_num2);
	printf("%d*%d=%d\n", input_num1,input_num2, input_num1*input_num2);
	printf("%d/%d=%d\n", input_num1,input_num2, input_num1/input_num2);
	printf("%d%%%d=%d\n", input_num1,input_num2, input_num1%input_num2);
}
