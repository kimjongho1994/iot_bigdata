#include<stdio.h>

void main(){
	int result1, result2, result3;
	int input_number1, input_number2, input_number3;

	printf("세가지 수를 입력하세요. ex) 3 4 5(Enter) : "); 
	scanf("%d %d %d", &input_number1, &input_number2, &input_number3);
	
	result1=input_number1-input_number2;
	result2=input_number2+input_number3;
	result3=input_number3%input_number1;
	

	printf("(%d-%d)*(%d+%d)*(%d%%%d)=%d\n",input_number1,input_number2,input_number2,input_number3,input_number3,input_number1,result1*result2*result3);	
	
}
