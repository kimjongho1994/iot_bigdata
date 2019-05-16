#include <stdio.h>

void main (){
	int input_num1, input_num2, input_num3;

	printf("1: ");
	scanf("%d", &input_num1);
	printf("2: ");
	scanf("%d", &input_num2);
	printf("3: ");
	scanf("%d", &input_num3);

	printf("(%d-%d)*(%d+%d)*(%d%%%d)=%d\n", input_num1,input_num2,input_num2,input_num3,input_num3,input_num1, (input_num1-input_num2)*(input_num2+input_num3)*(input_num3%input_num1));
}
