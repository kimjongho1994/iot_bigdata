#include<stdio.h>

void main(){
	// 49자를 표현할 수 있는 변수를 선언
	// 문자열 변수의 크기는 처리할 문자열의 최대 사이즈를 고려하여
	// 선언한다.
	
	char str[50];
	int idx=0;

	printf("문자열 입력: ");
	
	// 문자열을 나타내는 포맷스트링 %s
	// 특이사항: 문자열일결우 변수명에 &를 사용하지 않는다.
	
	// [화면 출력]
	// 문자열 입력: Hello world
	// 입력받은 문자열: Hello
	// scanf의 문자열 입력시 공백문자를 포함한 경우,
	// 공백문자 이후의 모든 문자열은 무시된다.
	
	// 공백을 포함하여 입력받는 것은 
	// 추후의 문자열 전용함수 chapter에서 다룬다.
	
	scanf("%s", str);
	printf("입력받은 문자열: %s \n", str);

	printf("문자 단위출력: ");
	while(str[idx] != '\0'){
		printf("%c",str[idx]);
		idx++;
	}
	printf("\n");			
}

