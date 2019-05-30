#include<stdio.h>
// 비정상 입력시 다시 입력하기 (중첩 while문)
void main(){
	int input_num;
	int num=5;
	int input_num_sum=0;
	
	while (num > 0){
		printf("정수 5개를 입력하시오: ");
		scanf("%d", &input_num);
		num--;
		while(input_num < 0){ 	
			printf("땡! 정수를 입력하시오: ");
			num++;
			input_num = 1;
			input_num_sum = input_num_sum-1;
		}
		
	input_num_sum += input_num  ;
	} 
	printf("총 정수의 합: %d\n", input_num_sum);

}

