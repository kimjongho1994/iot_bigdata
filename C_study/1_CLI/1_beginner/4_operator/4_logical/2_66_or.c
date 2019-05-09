#include <stdio.h>

void main(){
	int num1=10;
	int num2=12;
	int result;

	printf("num1: %d, num2: %d\n", num1, num2);

	// 거짓 || 거짓
	result = (num1 == 1 && num2==1);
	printf("(num1 ==1 && num2==1) => 평과결과: %d\n", result);

	//참 숨막히구만
}
