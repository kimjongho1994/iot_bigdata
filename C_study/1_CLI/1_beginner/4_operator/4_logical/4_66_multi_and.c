#include <stdio.h>
/* ���� AND ����ǥ
 * A���� B���� C���� ���
 * ����  ����  ����  ����
 * ��    ����  ����  ����
 * ��    ��    ����  ����
 * ��    ��     ��    ��
 * ����  ��    ����  ���� 
 * ��    ����   ��   ����
 * ����  ��     ��   ����
 * ����  ����   ��   ����
*/
void main(){
	int num1=10;
	int num2=12;
	int num3=14;
	int result;

	printf("num1: %d, num2: %d\n", num1, num2);

    // ���� && ���� && ����
	result = (num1 == 1 && num2 == 1 && num3 == 1);
	printf("(num1 ==10 && num2==12 && num3 == 14) => ������: %d\n", result);
    
	// �� && ���� && ����
	result = (num1 == 10 && num2 == 1 && num3 == 1);
	printf("(num1 ==10 && num2==12 && num3 == 14) => ������: %d\n", result);
	
	// �� && �� && ����
	result = (num1 == 10 && num2 == 12 && num3 == 1);
	printf("(num1 ==10 && num2==12 && num3 == 14) => ������: %d\n", result);
	
	// �� && �� && ��
	result = (num1 == 10 && num2 == 12 && num3 == 14);
	printf("(num1 ==10 && num2==12 && num3 == 14) => ������: %d\n", result);
	
	// ���� && �� && ����
	result = (num1 == 1 && num2 == 12 && num3 == 1);
	printf("(num1 ==10 && num2==12 && num3 == 14) => ������: %d\n", result);
	
	// �� && ���� && ��
	result = (num1 == 10 && num2 == 1 && num3 == 14);
	printf("(num1 ==10 && num2==12 && num3 == 14) => ������: %d\n", result);
	
	// ���� && �� && ��
	result = (num1 == 1 && num2 == 12 && num3 == 14);
	printf("(num1 ==10 && num2==12 && num3 == 14) => ������: %d\n", result);
	
	// ���� && ���� && ��
	result = (num1 == 1 && num2 == 1 && num3 == 14);
	printf("(num1 ==10 && num2==12 && num3 == 14) => ������: %d\n", result);
}
