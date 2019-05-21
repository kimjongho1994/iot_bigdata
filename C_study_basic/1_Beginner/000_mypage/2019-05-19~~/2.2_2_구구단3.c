#include <stdio.h>

void times_printf(int num1, int num2);

void main(){
	int num1= 4;
	int num2= 1;

	times_printf(num1, num2);
}
void times_printf(int num1, int num2){

	for (num1; num1<=8; num1++){
		printf("\n%d´Ü\n\n", num1);	
		for	(num2=1; num2<=9; num2++){
			printf("%d*%d=%d\n", num1, num2, num1*num2);
		}
	}
}
