#include<stdio.h>
/*
 * if([ ��� / ���� / ǥ����(expression)]){
 * 	��ɹ�(=statement)
 * }
*/
void main(){
	int num;
	printf("�����Է�: ");
	scanf("%d", &num);

	//num�� ������ ��쿡 15��, 18�������� ���ʿ��� ����,,
	if(num<0){
		printf("�Է��� ���� 0���� �۴�. \n");
	}
	if(num>0){
		printf("�Է��� ���� 0���� ũ��. \n");
	}
	if(num==0){
		printf("�Է��� ���� 0�̴�. \n");
	}
	return 0;
}

