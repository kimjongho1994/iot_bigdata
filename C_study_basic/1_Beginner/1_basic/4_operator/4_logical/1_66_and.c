#include<stdio.h>

void main(){
/*
 �� And [��:1 / ����:0]
 A���� B���� ���
 ����  ����  ����
  ��    ����  ����
 ����   ��   ����
  ��     ��    ��
*/
	int num1=10;
	int num2=12;
	int result;

	printf("num1: %d, num2: %d\n", num1, num2);
    
	// ���� && ����
	result = (num1 != 10 && num2 != 12);
	printf("(num1 != 10 && num2 != 12) => �򰡰��: %d\n",result);

	// �� && ����
	result = (num1 == 10 && num2 != 12);
	printf("(num1 == 10 && num2 != 12) => �򰡰��: %d\n",result);

	// ���� && ��
	result = (num1 != 10 && num2 == 12);
	printf("(num1 != 10 && num2 == 12) => �򰡰��: %d\n",result);

	// �� && ��
	result = (num1 == 10 && num2 == 12);
	printf("(num1 == 10 && num2 == 12) => �򰡰��: %d\n",result);
}
