#include<stdio.h>
/*
 * if([ 상수 / 변수 / 표현식(expression)]){
 * 	명령문(=statement)
 * }
*/
void main(){
	int num;
	printf("정수입력: ");
	scanf("%d", &num);

	//num이 음수일 경우에 15번, 18번라인은 불필요한 수행,,
	if(num<0){
		printf("입력한 값은 0보다 작다. \n");
	}
	if(num>0){
		printf("입력한 값은 0보다 크다. \n");
	}
	if(num==0){
		printf("입력한 값은 0이다. \n");
	}
	return 0;
}

