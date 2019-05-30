#include<stdio.h>

void main(){
	int result;
	int input_number;
	printf("하나의 수를 입력하시오: ");
	scanf("%d", &input_number);

	result = input_number * input_number;
	printf("%d", result);

}
