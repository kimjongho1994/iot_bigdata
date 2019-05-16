#include <stdio.h>

void main(){
	const int ANSWER=0;
	int input_password=0;

	printf("(0 1 2) 5초이내 입력하세요.\n 0=묵 1=찌 2=빠");
	printf("\n 5초 이내미입력시 컴퓨터가 종료됩니다.");
	scanf("%d", &input_password);

	if(ANSWER == input_password){
		printf("222222\n");
		printf("지셨습니다. 컴퓨터가 10초후 종료됩니다.");
	}else{
		printf("000000.\n지셨습니다. 10초뒤 컴퓨터가 종료됩니다.\n");
	}

}
