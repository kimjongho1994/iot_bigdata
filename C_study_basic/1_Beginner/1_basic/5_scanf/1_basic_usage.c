#include<stdio.h>

void main(){
	int input_number1, input_number2;
/*
	printf("���ڸ� �Է��ϼ���: \n");
	scanf("%d", &input_number);

	printf("����� �Է��� ���ڴ� %d�Դϴ�.\n", input_number);
*/

	printf("ù ��°  ���� �Է��ϼ���: \n"); 
	scanf("%d", &input_number1); // scanf������ Enter�� ������ 4�� �Է�
	printf("�� ��°  ���� �Է��ϼ���: \n");
	scanf("%d", &input_number2); // Enter: �Է¿ϷḦ �˾�è
	
	printf("%d+%d=%d\n",input_number1,input_number2,input_number1+input_number2);
	printf("%d-%d=%d\n",input_number1,input_number2,input_number1-input_number2);
	printf("%d*%d=%d\n",input_number1,input_number2,input_number1*input_number2);
	printf("%d/%d=%d\n",input_number1,input_number2,input_number1/input_number2); 
	printf("%d%%%d=%d\n",input_number1,input_number2,input_number1%input_number2); 
}

