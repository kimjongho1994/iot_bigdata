#include <stdio.h>

void main(){
	int world=7;
	int number=1;
	printf("World sector", world);
	/*
	 * while ���Ŀ� 1�� ������ ��쿡�� {}�� ������ �� �ִ�.
	while(number<=50)
		printf("hello guest%d!\n",number++);
	*/

	// {} ������ ���� �ʴ� ���� ����.
	// �Ʒ��� ���� ������ indentation�� �ϰ� ���� statement block����
	// �����ڰ� �����Ͽ� ���α׷��� ������ �� �� �ֱ� �����̴�.
	while(number<=50)
		printf("hello guest%d!\n",number);
		number++;
}
