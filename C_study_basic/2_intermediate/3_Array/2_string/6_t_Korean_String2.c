#include<stdio.h>
#pragma warning (disable:4996)

void main(){
	char str[]="안녕하세요";
	int idx=0;
	
	printf("문자 단위출력: ");
	while(str[idx] != '\0'){
		// 한글을 1byte씩 읽어 들이는 행위는 상황에 따라
		// 정상동작 혹은 다양한 형태로 문제를 발생시킬수 있다.
		// 한글은 1byte씩 처리하는 방식보다 
		// 한글을 입력, 수정을 할 수있는 
		// 전용함수를 사용하는 것이 안전하다.
		printf("%c",str[idx]);
		idx++;
	}
	printf("\n");			

}

