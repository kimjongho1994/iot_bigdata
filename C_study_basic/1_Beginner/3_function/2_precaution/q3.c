#include<stdio.h>
void Fibonacci(int number){	 

	int fibo1=0, fibo2=1,fibo3;
       	int series;
	
	if(number==1){
		printf("%d", fibo1);
	}else{
		printf("%d%d",fibo1,fibo2);
	}

	for(series=0; series < number-2; series++){
		fibo3=fibo1+fibo2;
		printf("%d", fibo3);
		fibo1=fibo2;
		fibo2=fibo3;
	}
}
int main(void){
	int input_number;
	printf("출력하고자하는 피보나치수열의 개수: ");
	scanf("%d", &input_number);
	if (input_number < 1){
		printf("1이상의 수를 입력하세요!\n");
		return 0;
	}
	Fibonacci(input_number);
	return 0;

}

