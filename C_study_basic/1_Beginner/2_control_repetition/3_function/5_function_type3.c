#include<stdio.h>
// 함수 유형3
// 반환타입 O, 인자 X(반환타입이 있고 인자는 없는 케이스)
// 장점: 호출하는 쪽에서는 입력에 대하여 신경쓰지 않아도 되고
// 	오로지 결과만을 받아서 처리할 수 있다.
// 단점: 함수에서 입력을 처리해야 하는 부담이 발생한다.
int my_add(void){ //함수 정의 (Function Definition)
	int number1;
	int number2;
	int operation_result;

	printf("\n두 수를 입력하세요: ");
	scanf("%d %d",&number1, &number2);

	printf("\n- 간단한 덧셈연산 ver1\n");
	printf("첫 번째 입력: %d\n", number1);
	printf("두 번째 입력: %d\n", number2);

	operation_result=number1+number2;
	printf("%d + %d = ", number1, number2);
	
	// return number1+number2; <= expression을 주고 평가한 값을 return하는 경우
	return operation_result; // 변수를 return하는 경우
}
void main(){ 

/*	int result;
	result=my_add(); //함수 호출(Function Definition)
//my_add() =result; => 논리적으로 성립되지 않는 잘못된 사용의 예
	printf("%d", result);
*/
	printf("%d\n", my_add());
	//printf("%d %d %d %d\n ", my_add(), my_subtraction(), my_multiplication(), my_division());
}

