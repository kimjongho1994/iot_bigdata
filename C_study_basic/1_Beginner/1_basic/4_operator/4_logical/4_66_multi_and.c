#include<stdio.h>

void main(){
/*
 �� And [��:1 / ����:0]
 A���� B���� C����  ���
 ����  ����   ����  ����
 ����  ����    ��   ����
 ����   ��    ����  ����
 ����   ��     ��   ����
 ��    ����   ����  ����
 ��    ����    ��   ����
 ��     ��    ����  ����
 ��     ��     ��     �� 
*/
	int num1=10;
	int num2=12;
	int num3=14;

	int result;

	printf("num1: %d, num2: %d\n", num1, num2);
    
	// ���� && ���� && ����
	result = (num1 == 11 && num2 == 13 && num3 == 12);
	printf("(num1 == 11 && num2 == 13 && num3 == 12) => �򰡰��: %d\n",result);

	// ����  && ���� && �� 
	result = (num1 == 11 && num2 == 13 && num3 == 14);
	printf("(num1 == 11 && num2 == 13 && num3 == 14) => �򰡰��: %d\n",result);

	// ���� && �� && ����
	result = (num1 == 11 && num2 == 12 && num3 == 13);
	printf("(num1 == 11 && num2 == 12 && num3 == 13) => �򰡰��: %d\n",result);
	
	// ���� && �� && ��
	result = (num1 == 11 && num2 == 12 && num3 == 14);
	printf("(num1 == 11 && num2 == 12 && num3 == 14) => �򰡰��: %d\n",result);
	
	// �� && ���� && ����
	result = (num1 == 10 && num2 == 11 && num3 == 12);
	printf("(num1 == 10 && num2 == 11 && num3 == 12) => �򰡰��: %d\n",result);

	//�� && ���� && ��
	result = (num1 == 10 && num2 == 13 && num3 == 14);
	printf("(num1 == 10 && num2 == 13 && num3 == 14) => �򰡰��: %d\n",result);
	
	// �� && �� && ����  
	result = (num1 == 10 && num2 == 12 && num3 == 12);
	printf("(num1 == 10 && num2 == 12 && num3 == 12) => �򰡰��: %d\n",result);

	// �� && �� && ��
	result = (num1 == 10 && num2 == 12 && num3 == 14);
	printf("(num1 == 10 && num2 == 12 && num3 == 14) => �򰡰��: %d\n",result);
}
