#include <stdio.h>
// ����: c���� ���� ǥ���ϱ�

void main(){
	char c_A=65;
	// ���ڸ� ǥ���� �� �ִ� ��� Ÿ������ �ƽ�Ű�ڵ��� ���ڸ�
	// ����� �� �ִ�. ������ �̴� 100% �ǹ̰� ����.
	// �ƽ�Ű �ڵ�� 32~126���� ǥ���Ǳ� ������ ���� ���� ���� Ÿ���� char�� ����� ǥ�� �����ϱ� �����̴�.
	int i_A=65;
	char c_B=66;
	char c_Z=90;
	char c_a=97;
	char c_o=62;
    char c_u=60;
	char c_m=61;
	
	printf("c_A������ ������: %d\n",c_A);
	printf("c_A������ ���ڰ�: %c\n",c_A);
	printf("i_A������ ���ڰ�: %c\n",i_A);
	printf("c_B������ ���ڰ�: %c\n",c_B);
	printf("c_Z������ ���ڰ�: %c\n",c_Z);
	printf("c_a������ ���ڰ�: %c\n",c_a);
	printf("                %c%c%c\n", c_o, c_m, c_u);
}
