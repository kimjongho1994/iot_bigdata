#include <stdio.h>

void main(){
	int num1=10;
	int num2=12;
	int result;

	printf("num1: %d, num2: %d\n", num1, num2);

	result = (num1 == 10 && num2==12);
	printf("(num1 ==10 && num2==12) => 평과결과: %d\n", result);
}
