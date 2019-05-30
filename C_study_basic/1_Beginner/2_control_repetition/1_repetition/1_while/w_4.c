#include<stdio.h>

void main(){
	int input_number;
	int i=9;

	printf("수를 입력하시오: ");
	scanf("%d", &input_number);
		
	while(i>0){
		printf("%d * %d =%d\n", input_number, i, input_number*i);
		i--;
	}
}

