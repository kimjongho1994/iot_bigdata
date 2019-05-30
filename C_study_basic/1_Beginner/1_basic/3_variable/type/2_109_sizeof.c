#include<stdio.h>
// sizeof ������: ����� ���� �Ǵ� �������� byte�� 
// #typedef char LG_char <= ����� ���� Ÿ��
// #typedef char LG_small_num <= ����� ���� Ÿ��
int main(){
	//int, short, char <= ���� Ÿ��(Native Type) 
	
	char c_number=9; //c_ <= �ش� ������Ÿ���� ������ �� �ִ� prefix�̴�. 
	int i_number=1052;
	double d_number=3.1415;
	// short s_number=1052; 
	
	// ������ size ���ϱ�
	printf("========= ������ size ���ϱ� ========\n");
	printf("���� c_number�� ũ��: %d\n", sizeof(c_number));
	printf("���� i_number�� ũ��: %d\n", sizeof(i_number));
	printf("���� d_number�� ũ��: %d\n\n", sizeof(d_number));

	// ������ type�� size���ϱ�
	printf("====== ���� type�� size ���ϱ� ======\n");
	printf("char�� ũ��: %d\n", sizeof(char));
	printf("signed char�� ũ��: %d\n", sizeof(signed char));
	printf("unsigned char�� ũ��: %d\n\n", sizeof(unsigned char));

	printf("int�� ũ��: %d\n", sizeof(int));
	printf("signed int�� ũ��: %d\n", sizeof(signed int));
	printf("unsigned int�� ũ��: %d\n", sizeof(unsigned int));

/*
	printf("short�� ũ��: %d\n", sizeof(short));
	printf("short int�� ũ��: %d\n", sizeof(short int));
	printf("signed short int�� ũ��: %d\n", sizeof(signed short int));
*/

}
