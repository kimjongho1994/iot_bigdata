#include <stdio.h>

void main(){
	int num;
	int num1;
	int num2;
	float save;	
		printf("몇개의 정수를 입력 할건가요? : ");
		scanf("%d", &num);
	save = num;
	while(num != 0){
		printf("%d개 남으셨습니다.\n하나씩 적어주세요:", num);
		scanf("%d", &num1);
		num2 = num2+num1;
		num--;		
	}
	printf("%d/%f=%f", num2, save, num2/save);
}
