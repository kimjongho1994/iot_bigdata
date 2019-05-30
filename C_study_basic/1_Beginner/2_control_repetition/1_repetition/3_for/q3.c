#include<stdio.h>
//팩토리얼 문제 while로 계산하기
void main(){
	int input_num;
	int b=1;
	int result=1;

	printf("수를 입력하세요: ");
	scanf("%d", &input_num);
	
	while(b<=input_num){

		result= result*b;
		printf("%d! = %d\n",input_num,result);
		b++;	
	}
}

