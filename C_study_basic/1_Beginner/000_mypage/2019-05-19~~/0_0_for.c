#include <stdio.h>

void main(){
	int num1;
	int num2=0;
	int num3=1;
	
	printf("���� 3���� �Է����ֽʽÿ�.\n");

	while(num3<=3){

			printf("�Է�: ");
			scanf("%d", &num1);

			if(num1 >=1){
					printf("'%d' �Է��ϼ̽��ϴ�.\n%d�� �Է��ϼ̽��ϴ�.\n", num1, num3);
					num3++;
					num2 = num2 + num1;
			}else{
					printf("\n�߸� �Է��ϼ̽��ϴ�.\n");
			}
	}
	printf("\n�Է��Ͻ� ������ ���� %d �Դϴ�.", num2);
	
}
