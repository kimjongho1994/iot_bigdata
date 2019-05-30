#include<stdio.h>
/* 함수정의(Function Definition)
 * [반환(return)타입] [함수명]([인자타입=parameter(파라메터)][인자(Argament)명1],,,){
 * [들여쓰기] 명령문1;
 * 		
 * 	      명령문 N;
 * 	      [return][반환값];
 * }
*/

void my_add(){
	int number1;
	int number2;
	int result;

	printf("두 수를 입력하세요: ");
	scanf("%d %d",&number1, &number2);

	printf("- 간단한 덧셈연산 ver1\n");
	printf("첫 번째 입력: %d\n", number1);
	printf("두 번째 입력: %d\n", number2);

	result=number1+number2;
	printf("%d + %d = %d\n", number1, number2, result);
	printf("연산이 종료가 되었습니다. 감사합니다.\n");

}
void main(){
	my_add();
	my_add();
}

