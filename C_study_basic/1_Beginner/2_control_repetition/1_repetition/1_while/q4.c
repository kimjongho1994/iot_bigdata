#include<stdio.h>
// 0~100���� ¦���� �� ���ϱ�
void main(){
	
	int a=0;
	int total=0;


	do {
			total+=a;
			a=a+2;
	}while(a<=100);
	
	printf("0~100������ ¦���� ��: %d\n", total);
}

