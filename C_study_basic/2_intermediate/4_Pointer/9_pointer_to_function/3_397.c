#include<stdio.h>

void SoSimpleFunc(void) {
	printf("I'm so simple");
}
int main(void){
	int num = 20;
	void* ptr;

	ptr = &num;
	printf("%p \n", ptr);

	// �Ʒ��� �ڵ�� �����Ͻ� ������ �߻��Ѵ�.
	// pointer to void Ÿ���� ����  �����޸𸮿� ���� ���ȴ�.
	//printf("num: %d\n", *ptr);

	ptr = SoSimpleFunc;
	printf("%p \n", ptr);

	return 0;
}
