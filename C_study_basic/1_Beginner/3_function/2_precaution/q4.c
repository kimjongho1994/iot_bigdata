#include<stdio.h>
int AbsoCompare(int num1, int num2);	
int GetAbsoValue(int num);		

void main(){
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	printf("%d와 %d", num1, num2);
	if (AbsoCompare(num1, num2)!=0){
		printf("중 절댓값이 큰 정수: %d",(AbsoCompare(num1, num2)));
	
	}else{
		printf("의 절댓값은 같습니다. \n");
	}
}

int AbsoCompare(int num1, int num2){
	int Abso_num1=GetAbsoValue(num1);
	int Abso_num2=GetAbsoValue(num2);
	
	if(Abso_num1 > Abso_num2){
		return num1;
	}else if(Abso_num1 < Abso_num2){
		return num2;
	}else{
		return 0;
	}
}

int GetAbsoValue(int num){
	if(num<0){
		return num * (-1);
	}else{
		return num;
	}
}

