#include<stdio.h>

void main(){
	int world=7;
	int number=1;

	/* 
	   while ( [���], [����], [ǥ����] ) {
	   step1) ��ȣ �� ���, ���� Ȥ�� ǥ���� ���ϱ�
	   step2)
	   [expression] ���� ��� => ��, while������ statement block ����
	 		            => ����, statement block �������´�.
	   [����or���]             => 0�� �ƴ� ���̸� 

	   step3) step2)�� ���ΰ�� -> step1) ���� �̵�
	   }
	*/
	printf("World sector: %d\n", world);
	while(number<=50){
		printf("Hello guest%d!\n", number);
		number++; // number = number+1

	}
}
