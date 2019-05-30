#include<stdio.h>

void main(){
	int numerator=3;
	int denominator=4;
	double result;
	int i_result;

	// R-value 정수/정수의 결과는 정수이다.
	// L-value 실수이다.
	// 이 경우에 R-value의 Implicit Type Casting이 이루어진다.
	// 하지만 정수간의 나눗셈 연산은 소수점 이하가 무시된다.
	// 따라서 정수간의 연산이라 할지라도 데이터 손실을 막기위한 형변환이 필요하다.
	//result=numerator/denominator;

	
	// Explicit Type Casting = 강제 형변환
	// 문법: (형이름)[상수/변수]
	
	// Case1] 
	// 아래 예시는 numerator 변수가 강제 형변환 되어 실수와 정수간의 연산이 되므로
	// 정수형 변수인 denominator 는 묵시적 형변환(Implicit Type Casting)이 일어난다.
	//  result=(double)numerator/denominator
	
	// Case2] ci_my_birth_day=0
	result=numerator/(double)denominator;

	printf("나눗셈 결과: %f\n", result);

	// L-Value는 정수 R-Value는 실수인경우에는 L-Value에서 Implicit Type Casting이
	// 이루어지지 않는다. 선언한 타입자체를 바꿀 수 없기 때문이다.
	// 이 경우에는 데이터의 손실(Data Loss)을 감수해야 한다.
	i_result= numerator/(double)denominator;
	printf("나눗셈 결과: %d\n",i_result);
}
