#include<stdio.h>
// ������ �Է½� �ٽ� �Է��ϱ� (��ø while��)
void main(){
	int input_num;
	int num=5;
	int input_num_sum=0;
	
	while (num > 0){
		printf("���� 5���� �Է��Ͻÿ�: ");
		scanf("%d", &input_num);
		num--;
		while(input_num < 0){ 	
			printf("��! ������ �Է��Ͻÿ�: ");
			num++;
			input_num = 1;
			input_num_sum = input_num_sum-1;
		}
		
	input_num_sum += input_num  ;
	} 
	printf("�� ������ ��: %d\n", input_num_sum);

}

