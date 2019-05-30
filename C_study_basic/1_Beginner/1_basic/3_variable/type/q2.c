#include<stdio.h>

void main(){
	double input_double1;
	double input_double2;
	double result;
	
	printf("두 수를 입력하세요: ");
	scanf("%lf %lf", &input_double1, &input_double2);

	result=input_double1+input_double2;
	printf("%lf+%lf=%lf\n",input_double1,input_double2,result);

	result=input_double1-input_double2;
	printf("%lf-%lf=%lf\n",input_double1,input_double2,result);

	result=input_double1*input_double2;
	printf("%lf*%lf=%lf\n",input_double1,input_double2,result);

	result=input_double1/input_double2;
	printf("%lf/%lf=%lf\n",input_double1,input_double2,result); 


}
