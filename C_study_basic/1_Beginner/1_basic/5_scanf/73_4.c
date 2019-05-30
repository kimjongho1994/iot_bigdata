#include<stdio.h>

void main(){
	int portion;
	int remainder;
	int input_number1, input_number2;

	printf("두 수를 입력하시오: ");
	scanf("%d %d", &input_number1, &input_number2);
	
	portion=input_number1/input_number2;
	remainder=input_number1%input_number2;
	printf("%d %d", portion, remainder);

}
