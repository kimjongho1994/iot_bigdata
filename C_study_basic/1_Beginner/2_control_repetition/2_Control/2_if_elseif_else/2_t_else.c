#include<stdio.h>
int main(void){
	int num;
	printf("정수입력: ");
	scanf("%d", &num);

	// else는 위에 if 또는 elseif에서 다루지 않았던 모든 조건을 포함한다.
	// 즉, default의 성격을 가지고 있다.
	
/*	if(num<0){
		printf("입력한 값은 0보다 작다. \n");
	}
	else if(num>0){
		printf("입력한 값은 0보다 크다. \n");
	}
	else if(num==0){
		printf("입력한 값은 0이다. \n");
	}
	return 0;
*/
	if(num < -7){
		printf("Type A\n");
	}else if(num >-5 && num < -3){
		printf("Type B\n");
	}else if(num == 0){
		printf("Type C\n");
	}else if(num > 2 && num < 10){
		printf("Type D\n");
	}else if(num > 13  && num < 1000){
		printf("Type E\n");
	}else {
		printf("Type F\n");
	}
}
