#include <stdio.h>

void main (){
	int input_num1, input_num2;

	printf("ù��° ���� �Է��ϼ���: ");
	scanf("%d", &input_num1);
	printf("�ι�° ���� �Է��ϼ���: ");
	scanf("%d", &input_num2);

	printf("%d+%d=%d\n", input_num1,input_num2, input_num1+input_num2);
	printf("%d-%d=%d\n", input_num1,input_num2, input_num1-input_num2);
	printf("%d*%d=%d\n", input_num1,input_num2, input_num1*input_num2);
	printf("%d/%d=%d\n", input_num1,input_num2, input_num1/input_num2);
	printf("%d%%%d=%d\n", input_num1,input_num2, input_num1%input_num2);
}
