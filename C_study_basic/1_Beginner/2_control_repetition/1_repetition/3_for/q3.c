#include<stdio.h>
//���丮�� ���� while�� ����ϱ�
void main(){
	int input_num;
	int b=1;
	int result=1;

	printf("���� �Է��ϼ���: ");
	scanf("%d", &input_num);
	
	while(b<=input_num){

		result= result*b;
		printf("%d! = %d\n",input_num,result);
		b++;	
	}
}

