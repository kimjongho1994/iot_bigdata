#include<stdio.h>
#pragma warning (disable:4996)
// ��ü ���: �� ���� �Է¹޾Ƽ� ���� ���� ū ���� �Ǵ����ִ� ���α׷�
// �Ʒ� �� ���� Function Prototype(=�Լ� ����)
// �Լ� ������ �ۼ��ϴ� ���� : �Լ� ����(Function Declaration)
int AbsoCompare(int num1, int num2);	// ������ ū ���� ��ȯ
int GetAbsoValue(int num);		// ���������� ������ ��ȯ
//������� : 8,9,10,11,15,26,31,38,39,40,31,38,39,41,42,31,32,15,24
void main(){
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
	//printf("%d�� %d�� ������ ū ����: %d \n", num1, num2, AbsoCompare(num1, num2));

	// �Լ��� ���ڰ� �� ��쿡 �� �ٲ��� �ص� ������ ����.
	// �ٸ� ������ ������ �� �� �ִ�. (ex, Python)
	printf("%d�� %d�� ������ ū ����: %d \n",
		       	num1, num2, AbsoCompare(num1, num2));
	
	// printf�Լ� ù��° ������ ���ڿ����� ""\n�� ��������ʰ�
	// �ٹٲ��� �� ��쿡�� �����Ͽ����� �߻��Ѵ�.
	/*
	printf("%d�� %d�� 
	   	������ ū ����: %d \n",
		num1, num2, AbsoCompare(num1, num2));
	*/
}

int AbsoCompare(int num1, int num2){
	// �Լ��� main �Լ������� ȣ���� �� �ִ� ���� �ƴϴ�.
	// �Լ����� �Լ��� ȣ���� �� �ִ�.
	// ���迬���� �ϱ� ���ؼ� ����, ������ �Լ��� ���� ȣ���Ͽ� 
	// ���� ����� ������� �񱳿����� �Ѵ�.
	if( GetAbsoValue(num1) > GetAbsoValue(num2) ){
		return num1;
	}else{
		return num2;
	}
}

int GetAbsoValue(int num){
	if(num<0){
		return num * (-1);
	}else{
		return num;
	}
}

