#include <stdio.h>

void times_printf(int num1, int num2);

void main(){
	int num1;
	int num2= 1;

	printf("수를 입력하세요: ");
	scanf("%d", &num1);
	times_printf(num1, num2);
}
void times_printf(int num1, int num2){

	for	(num2; num2<=9; num2++){
		printf("%d*%d=%d\n", num1, num2, num1*num2);
	}
}


	


