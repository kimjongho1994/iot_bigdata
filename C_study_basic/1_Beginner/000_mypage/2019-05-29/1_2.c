#include <stdio.h>

void main(){
	int num=1;
	int num1;

	printf("���� �Է�: ");
	scanf("%d", &num1);

	num1= num1+1;
	while(num<num1){
		printf("%d*%d=%d\n", 3, num, 3*num);
		num++;
	}
}
