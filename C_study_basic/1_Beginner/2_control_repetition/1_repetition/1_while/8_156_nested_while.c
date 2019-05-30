#include<stdio.h>
// nested while (중첩된 while문)

void main(){
	int current_times = 2;
	int multiplier=0;

	printf("구구단을 외자!\n");
	/*
	 * 2 4 6 8 10 12 14 16 18 
	 * .
	 * .
	 * .
	 * 9 . . . . . . . . . 81
	 *
	 * 구구단을 데이터를 table형태로 표현한 자료구조와 같다.
	 * 이러한 데이터 구조는 2중 반복문으로 접근하는 것이 가장 효율적이다.
	 * 첫번째 while문은 논리적으로 데이터 'table의 행'을 접근하는 것이며
	 * 두번째 while문은 논리적으로 데이터 'table의 열'을 접근하는 구조이다.
	 */
	
	while(current_times<10){ //각 열을 접근하는 조건으로 초기화
		multiplier=1;
		
		printf("==== %d단 ====\n",current_times);
		while(multiplier<10){
			printf("%d * %d = %d\n", current_times,multiplier, current_times*multiplier);
			multiplier++; // 다음 열을 접근하기 위한 조건을 설정
		}
		printf("\n");
		current_times++; // 다음 행을 접근하기 위한 조건 설정

	}
	
}
