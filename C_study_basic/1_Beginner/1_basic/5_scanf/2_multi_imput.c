// 교재 p73
#include<stdio.h>

void main(){
	int result;
	int num1, num2, num3;
	
	printf("세 개의 정수입력: ");
	// 마지막 입력 이전에 입력들의 구분자는 공백문자이다.
	// 구분자(separator, delimiter)
	scanf("%d %d %d", &num1, &num2, &num3);
	// 	8(공백)4(공백)2(enter) 
	// 	공백 = 구분자 
	// 	enter = 전체입력의 끝을 나타내는 구분자

	result = num1+num2+num3; 
	printf("%d + %d + %d = %d\n", num1, num2, num3, result);
}
