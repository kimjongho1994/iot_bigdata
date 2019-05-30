#include<stdio.h>

int max(int num1, int num2, int num3);
int min(int num1, int num2, int num3);

void main(){
	int a, b, c;
	printf("세 개의 수 입력를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("그 중 가장 큰 수: %d \n",max(a,b,c));
	printf("그 중 가장 작은 수: %d \n",min(a,b,c));
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
