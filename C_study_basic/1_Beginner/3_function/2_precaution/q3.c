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
	printf("����ϰ����ϴ� �Ǻ���ġ������ ����: ");
	scanf("%d", &input_number);
	if (input_number < 1){
		printf("1�̻��� ���� �Է��ϼ���!\n");
		return 0;
	}
	Fibonacci(input_number);
	return 0;

}

