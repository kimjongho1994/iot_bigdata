#include<stdio.h>

void main(){
	int result;
	int input_number1;
        int input_number2;
        int input_number3;

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &input_number1, &input_number2, &input_number3);

	result = (input_number1*input_number2)+input_number3;
	printf("%d * %d + %d = %d\n",input_number1,input_number2,input_number3,result);

}
