#include <stdio.h>

void main(){

	int num1;
	int num2;
	int num3;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	int result1 = num1-num2;
    int result2 = num2+num3;
	int result3 = num3%num1;
	
	printf("(%d-%d)*(%d+%d)*(%d%%%d)= %d\n", num1, num2, num2, num3, num3, num1,result1*result2*result3);

	
}
