#include <stdio.h>

void main(){
	int num1, num2;
	int stop= 0;

	printf("2개의 정수입력: ");
	scanf("%d %d", &num1, &num2);

	for ( num1; num1<= num2; num1++ ){
	
		stop= stop+num1;
	}

	printf("%d", stop);
}
