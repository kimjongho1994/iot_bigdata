#include <stdio.h>
//while([���/����/ǥ����])
//step1] while()�ȿ� �ִ� ���,���� �Ǵ� ǥ������ ���Ѵ�
//step2] ���� ���(ǥ����)�� ��(1)�̸�(������ ����� 0�� �ƴѰ��̸�)
//		 while ������ Statement Block�� �����Ѵ�.
//       ����(0)�̸� Statement Block�� �������´�.
//step3] step2���� ���ΰ�� step1�� �̵��Ѵ�.
void main(){
	int world=7;
	int number=1;
	printf("world sector: %d\n",world);
	while(number<=50){
		printf("Hello guest%d!\n",number);
		number++;
	}
}
