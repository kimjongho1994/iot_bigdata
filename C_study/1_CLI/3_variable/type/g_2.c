#include <stdio.h>

void main(){
	double num1, num2, result1, result2, result3, result4;
	printf("��� ���͵帱�Կ�. ���� 2�� �Է��ϼ���. : ");
	scanf("%lf%lf", &num1, &num2);
	
	num1 = num1;
	num2 = num2;
	result1 = num1+num2;
	result2 = num1-num2;
	result3 = num1*num2;
	result4 = num1/num2;
	printf("%f+%f=%f�Դϴ�.\n", num1, num2, result1);
	printf("%f-%f=%f�Դϴ�.\n", num1, num2, result2);
	printf("%f*%f=%f�Դϴ�.\n", num1, num2, result3);
	printf("%f/%f=%f�Դϴ�.\n", num1, num2, result4);
}
