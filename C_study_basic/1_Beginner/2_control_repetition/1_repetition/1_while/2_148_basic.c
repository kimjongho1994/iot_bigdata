#include<stdio.h>

void main(){
	int world=7;
	int number=1;

	/* 
	   while ( [상수], [변수], [표현식] ) {
	   step1) 괄호 안 상수, 변수 혹은 표현식 평가하기
	   step2)
	   [expression] 평가한 결과 => 참, while이하의 statement block 수행
	 		            => 거짓, statement block 빠져나온다.
	   [변수or상수]             => 0이 아닌 값이면 

	   step3) step2)가 참인경우 -> step1) 으로 이동
	   }
	*/
	printf("World sector: %d\n", world);
	while(number<=50){
		printf("Hello guest%d!\n", number);
		number++; // number = number+1

	}
}
