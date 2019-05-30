#include <stdio.h>

void main(){
	int num;
	int num1;

	while(num!=0){
		printf("정수 입력: ");
		scanf("%d", &num);
		num1+=num;
	}
	printf("%d", num1);
}
