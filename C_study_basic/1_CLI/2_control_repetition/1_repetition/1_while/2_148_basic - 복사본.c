#include <stdio.h>
//while([���/����/ǥ����])
//step1] while()�ȿ� �ִ� ���,���� �Ǵ� ǥ������ ���Ѵ�
//step2] ���� ����� ��(1)�̸� while ������ Statement Block�� �����Ѵ�.
//       ����(0)�̸� Statement Block�� �������´�.
//step3] step2���� ���ΰ�� step1�� �̵��Ѵ�.
void main(){
	int number=0;
	while(number<50){
		printf("Hello world!\n");
		number++;
	}
}
