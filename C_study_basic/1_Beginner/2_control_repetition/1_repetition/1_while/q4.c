#include<stdio.h>
// 0~100까지 짝수의 합 구하기
void main(){
	
	int a=0;
	int total=0;


	do {
			total+=a;
			a=a+2;
	}while(a<=100);
	
	printf("0~100까지의 짝수의 합: %d\n", total);
}

