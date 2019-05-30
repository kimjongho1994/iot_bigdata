#include<stdio.h>

void main(){
		int i=1;
		int input_number;

		printf("양의 정수를 입력하시오: ");
		scanf("%d", &input_number);

		while(i <= input_number){
			printf("%d ", 3*i );
			i++;
		}
	
}

