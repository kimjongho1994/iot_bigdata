#include<stdio.h>

void main(){
	double input_double1;
	double input_double2;
	double result;
	
	printf("�� ���� �Է��ϼ���: ");
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
