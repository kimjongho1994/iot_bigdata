#include<stdio.h>

void main(){
	
	int input_number1;
	int input_number2;
	int i=0;
	double total=0.0;

	printf("��� ������ �Է��� ���ΰ���?: ");
	scanf("%d", &input_number1);
		
	while(i < input_number1){
		
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &input_number2 );
	 	total+=input_number2;
		i ++;
	    
	}
	printf("�Էµ� ������ ���: %lf",total/input_number2);
}

