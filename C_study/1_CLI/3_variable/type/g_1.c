#include <stdio.h>

void main(){
	int num1;
	int num2;
	int num3, num4;

	printf("�� �����x, y ���� �Է��ϼ���: ");
	scanf("%d%d", &num1, &num2);
	printf("�� �ϴ���x, y ���� �Է��ϼ���: ");
	scanf("%d%d", &num3, &num4);
	
	num1 = num1;
	num2 = num2;
	num3 = num3;
	num4 = num4;
	printf("�簢���� ���̴� %d�Դϴ�.", (num3-num1)*(num4-num2));
}
