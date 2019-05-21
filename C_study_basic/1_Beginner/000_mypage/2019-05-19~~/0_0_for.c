#include <stdio.h>

void main(){
	int num1;
	int num2=0;
	int num3=1;
	
	printf("숫자 3개를 입력해주십시오.\n");

	while(num3<=3){

			printf("입력: ");
			scanf("%d", &num1);

			if(num1 >=1){
					printf("'%d' 입력하셨습니다.\n%d번 입력하셨습니다.\n", num1, num3);
					num3++;
					num2 = num2 + num1;
			}else{
					printf("\n잘못 입력하셨습니다.\n");
			}
	}
	printf("\n입력하신 숫자의 합은 %d 입니다.", num2);
	
}
