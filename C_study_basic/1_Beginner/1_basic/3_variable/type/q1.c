#include<stdio.h>

void main(){

	int right_x;
	int right_y;
	int left_x;
	int left_y;
	int result;

	printf("�� ����� x,y��ǥ: ");
	scanf("%d %d", &left_x, &left_y);

	printf("�� �ϴ��� x,y��ǥ: ");
	scanf("%d %d", &right_x, &right_y);

	result=(right_x-left_x)*(right_y-left_y);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.\n", result);

}
