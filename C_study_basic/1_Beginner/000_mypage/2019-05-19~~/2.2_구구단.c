#include <stdio.h>

void times_printf(int num1, int num2, int num3);

void main(){
	int num1;
	int num2;
	int num3;

	printf("두 수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	times_printf(num1, num2,num3);
}
void times_printf(int num1, int num2, int num3){

	if (num1<=num2){
		for (num1; num1<=num2; num1++){
			printf("\n%d단\n", num1);
			for	(num3=1; num3<=9; num3++){
			printf("%d*%d=%d\n", num1, num3, num1*num3);
			}
		}
	}else {
		for(num2; num2<=num1; num2++){
			printf("\n%d단\n", num2);
			for (num3=1; num3<=9; num3++){
			printf("%d*%d=%d\n", num2, num3, num2*num3);
			}
		}
	}
}
