#include<stdio.h>

void main(){
	int portion;
	int remainder;
	int input_number1, input_number2;

	printf("�� ���� �Է��Ͻÿ�: ");
	scanf("%d %d", &input_number1, &input_number2);
	
	portion=input_number1/input_number2;
	remainder=input_number1%input_number2;
	printf("%d %d", portion, remainder);

}
