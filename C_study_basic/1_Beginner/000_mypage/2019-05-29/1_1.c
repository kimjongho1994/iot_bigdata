#include <stdio.h>

void main(){
	int num1=0;
	int num2;

	printf("정수 입력: ");
	scanf("%d", &num2);

	while(num1<num2){
		printf("Hello world!\n");
		num1++;
	}
}
