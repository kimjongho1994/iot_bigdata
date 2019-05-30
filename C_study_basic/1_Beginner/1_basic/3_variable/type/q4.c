#include<stdio.h>

void main(){
	int input=65;

	printf("아스키코드 값을 정수(32~126)로 입력하세요:");
	scanf("%d", &input);
	printf("c_input변수의 문자값: %c\n",input);
}
