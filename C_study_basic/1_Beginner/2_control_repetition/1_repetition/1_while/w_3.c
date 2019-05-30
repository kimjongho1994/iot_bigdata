#include<stdio.h>

void main(){
	int unknown_number=0;	
	int input_number=1;
	int sum=0;

	while(unknown_number != input_number){
		printf("정수를 입력하시오: ");
		scanf("%d", &input_number);
		sum=sum+input_number;
	}
	printf("입력된 모든 정수의 합: %d", sum);
}

