#include <stdio.h>

void main(){
	int num1=0;
	int num2=3;
	int num3=1;

	printf("3의 배수를 출력해드릴게요: ");
	scanf("%d", &num1);

	while(num1 >=num3){
		printf("%d*%d=%d\n", num2 ,num3, num2*num3);
		num3++;
	}
}
