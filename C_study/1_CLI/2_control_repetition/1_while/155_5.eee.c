#include <stdio.h>

void main(){
	int num;
	int num1;
	int num2;
	float save;	
		printf("��� ������ �Է� �Ұǰ���? : ");
		scanf("%d", &num);
	save = num;
	while(num != 0){
		printf("%d�� �����̽��ϴ�.\n�ϳ��� �����ּ���:", num);
		scanf("%d", &num1);
		num2 = num2+num1;
		num--;		
	}
	printf("%d/%f=%f", num2, save, num2/save);
}