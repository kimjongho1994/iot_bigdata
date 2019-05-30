#include<stdio.h>

void main(){
	int input_num;
	int b;
	int result=1;
	printf("수를 입력하세요: ");
	scanf("%d", &input_num);

	for (b=1; b <= input_num; b++){
		
		result= result*b;
	}
	printf("%d! = %d\n",input_num,result);
}

