#include <stdio.h>

void main(){
	int total=0, input_num=0;
/*
	do{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &input_num);
		total = total + input_num;
	}while(input_num!=0);

	printf("�հ�: %d \n", total);
}
*/

	printf("���� �Է�(0 to quit): ");
	scanf("%d", &input_num);

	while(input_num!=0){
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &input_num);
		total = total + input_num;
	}
	printf("�հ�: %d \n", total);

}
