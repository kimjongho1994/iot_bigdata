#include<stdio.h>

void main(){
	int unknown_number=0;	
	int input_number=1;
	int sum=0;

	while(unknown_number != input_number){
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &input_number);
		sum=sum+input_number;
	}
	printf("�Էµ� ��� ������ ��: %d", sum);
}

