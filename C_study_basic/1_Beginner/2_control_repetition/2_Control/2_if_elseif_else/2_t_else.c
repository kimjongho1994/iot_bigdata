#include<stdio.h>
int main(void){
	int num;
	printf("�����Է�: ");
	scanf("%d", &num);

	// else�� ���� if �Ǵ� elseif���� �ٷ��� �ʾҴ� ��� ������ �����Ѵ�.
	// ��, default�� ������ ������ �ִ�.
	
/*	if(num<0){
		printf("�Է��� ���� 0���� �۴�. \n");
	}
	else if(num>0){
		printf("�Է��� ���� 0���� ũ��. \n");
	}
	else if(num==0){
		printf("�Է��� ���� 0�̴�. \n");
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
