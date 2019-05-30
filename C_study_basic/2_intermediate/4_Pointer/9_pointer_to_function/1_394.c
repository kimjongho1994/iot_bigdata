#include<stdio.h>
void SimpleAdder(int n1, int n2);
void SimpleSubstraction(int, int);
void ShowString(char* str);

void main(void) {
	char* str = "Pointer to Function";
	int num1 = 10, num2 = 20;

	//	void (*fptr1)(int, int) = SimpleAdder;
	void (*fptr1)(int, int) = SimpleSubstraction;

	// �Ʒ��� ��� : 
	// �����Ͻ�, Pointer to Function �� �Լ� ������ ��Ī�� �� 
	// �Լ��� ������ ��ġ�ϴ����� ���� ���ռ� �˻�� �̷������ �ʴ´�.
	// ���� �߸��� �Լ��� �̸�(�ּ�)�� ��Ī���� ��� ��Ÿ�ӿ����� �߻��Ѵ�.
	//void (*fptr1)(int, int) = ShowString;
	void (*fptr2)(char*) = ShowString;

	//�Լ� ������ ������ ���� ȣ��
	fptr1(num1, num2);
	fptr2(str);
	
}
void SimpleAdder(int n1, int n2) {
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}
void SimpleSubstraction(int n1, int n2) {
	printf("%d - %d = %d \n", n1, n2, n1 - n2);
}

void ShowString(char* str) {	
	printf("%s \n", str);
}
