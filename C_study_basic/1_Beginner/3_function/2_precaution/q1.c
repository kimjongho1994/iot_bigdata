#include<stdio.h>

int max(int num1, int num2, int num3);
int min(int num1, int num2, int num3);

void main(){
	int a, b, c;
	printf("�� ���� �� �Է¸� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("�� �� ���� ū ��: %d \n",max(a,b,c));
	printf("�� �� ���� ���� ��: %d \n",min(a,b,c));
}

int max(int num1, int num2, int num3){
	if(num1 > num2){
	 	return num1>num3? num1: num3;
	}else{
		return num2>num3? num2: num3;
	}
}
int min(int num1, int num2, int num3){
	if(num1 < num2){
	 	return num1<num3? num1: num3;
	}else{
		return num2<num3? num2: num3;
	}
}
