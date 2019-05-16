#include <stdio.h>

void main(){
	int num1;
	int num2= 1;
	int stop;

	printf("ют╥б: ");
	scanf("%d", &num1);

	for (;num2<=num1; num2++){

		printf("%d*%d=%d\n", num1, num2, num1*num2);
	}
}
