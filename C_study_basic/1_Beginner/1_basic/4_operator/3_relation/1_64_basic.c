#include<stdio.h>

void main(){
/*
 ���迬�� ����ǥ
 A < B => A�� B���� ������?
 A > B => A�� B���� ū��?
 A == B => A�� B�� ������?
 A != B => A�� B�� ���� ������? (�ٸ���)? //!(=Not) 
 A <= B => A�� B���� �۰ų� ������? //�۾Ƶ� ��, ���Ƶ� ��
 A >= B => A�� B���� ũ�ų� ������? //Ŀ�� ��, ���Ƶ� ��

 �� => 1, ���� =>0

*/
	int num1=10;
	int num2=12;
	int result;

	printf("num1: %d, num2: %d\n", num1, num2);

	result = (num1 < num2);
	printf("(num1 < num2) => �򰡰��: %d\n",result);

	result = (num1 > num2);
	printf("(num1 > num2) => �򰡰��: %d\n",result);

	result = (num1 == num2);
	printf("(num1 == num2) => �򰡰��: %d\n",result);
	
	result = (num1 != num2);
	printf("(num1 != num2) => �򰡰��: %d\n",result);

	result = (num1 <= num2);
	printf("(num1 <= num2) => �򰡰��: %d\n",result);

	result = (num1 >= num2);
	printf("(num1 >= num2) => �򰡰��: %d\n",result);

}
