#include <stdio.h>

void main(){
	int num;
	int num1;

	while(0 != num){
		printf("숫자를 입력하세요: \n");
		scanf("%d", &num);
		
		num1 += num;
	}
	printf("%d", num1);
}
