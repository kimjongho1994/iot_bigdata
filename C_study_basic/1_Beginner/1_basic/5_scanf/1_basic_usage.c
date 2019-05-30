#include<stdio.h>

void main(){
	int input_number1, input_number2;
/*
	printf("숫자를 입력하세요: \n");
	scanf("%d", &input_number);

	printf("당신이 입력한 숫자는 %d입니다.\n", input_number);
*/

	printf("첫 번째  수를 입력하세요: \n"); 
	scanf("%d", &input_number1); // scanf에서는 Enter를 제외한 4를 입력
	printf("두 번째  수를 입력하세요: \n");
	scanf("%d", &input_number2); // Enter: 입력완료를 알아챔
	
	printf("%d+%d=%d\n",input_number1,input_number2,input_number1+input_number2);
	printf("%d-%d=%d\n",input_number1,input_number2,input_number1-input_number2);
	printf("%d*%d=%d\n",input_number1,input_number2,input_number1*input_number2);
	printf("%d/%d=%d\n",input_number1,input_number2,input_number1/input_number2); 
	printf("%d%%%d=%d\n",input_number1,input_number2,input_number1%input_number2); 
}

