#include<stdio.h>

void main(){
	
	int input_number1;
	int input_number2;
	int i=0;
	double total=0.0;

	printf("몇개의 정수를 입력할 것인가요?: ");
	scanf("%d", &input_number1);
		
	while(i < input_number1){
		
		printf("정수를 입력하시오: ");
		scanf("%d", &input_number2 );
	 	total+=input_number2;
		i ++;
	    
	}
	printf("입력된 정수의 평균: %lf",total/input_number2);
}

