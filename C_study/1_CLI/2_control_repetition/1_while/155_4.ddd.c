#include <stdio.h>

void main(){
	int num;
	int num1=9;
		
		printf("숫자를 입력하세요: \n");
		scanf("%d", &num);

	while(0 != num1){
		printf("%d*%d=%d\n", num, num1, num*num1);
		num1--;
		
	}
}
