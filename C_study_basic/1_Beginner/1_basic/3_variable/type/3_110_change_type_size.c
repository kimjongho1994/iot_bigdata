#include<stdio.h>

// 목적: char, short 타입이 산술 연산시 사이즈의 변화확인
int main(){
	char num1=1, num2=2, result1=9;
	short num3=300, num4=400, result2=0;
	char test_num1=100, test_num2=110, result3=0;

	printf("size of num1: %d, num2: %d\n", sizeof(num1), sizeof(num2));
	printf("size of num3: %d, num4: %d\n", sizeof(num3), sizeof(num4));
	printf("========================\n");

	// char, short 계열의 타입의 산술연산을 'expression으로만' 사용했을 경우에는
	// 해당 타입보다 더 큰 타입의 임시변수(=Temporary Variable)가 내부적으로 생성된다.
	// 임시 변수는 프로그램에서 '보이지 않고' 컴파일러가 연산을 위해 '생성'한다.
	// 장점 : 연산속도가 빠름, 연산결과의 값이 보존된다. 
	// 단점 : 메모리 낭비 초래, 가독성이 떨어짐, 디버깅하기 어려움.
	printf("size of char add: %d \n", sizeof(num1+num2));
	printf("size of short add: %d \n", sizeof(num3+num4));
	printf("test_num1(%d)+test_num2(%d)=%d\n\n", test_num1, test_num2,test_num1+test_num2);
 
	// 연산 결과를 '같은타입의 변수로 저장할 경우'에는 본래의 타입 사이즈를 '유지'한다.
	// 장점 : 메모리를 최적화할 수 있음, 가독성이 향상, 디버깅이 용이함.
	// 단점 : 연산속도가 상대적으로 느릴 수 있음.(반복적으로 수행되는 경우)
	//        연산결과 값이 왜곡될 수 있음.
	result1=num1+num2;
	result2=num3+num4;
	printf("size of result1 &result2: %d, %d\n", sizeof(result1), sizeof(result2));
	
	result3=test_num1+test_num2;
	printf("test_num1(%d)+test_num2(%d)=result3(%d)\n", test_num1, test_num2,result3);

}
