#include <stdio.h>

void main(){
	int num;
	printf("����� �հ��� ���� -1=");
	scanf("%d", &num);

	num = num << 2;
	printf("������%d�Դϴ�\n", num);

	num = num >> 1;
	printf("%d�쵵 �̹����� ������ϴ�.\n", num);
}
