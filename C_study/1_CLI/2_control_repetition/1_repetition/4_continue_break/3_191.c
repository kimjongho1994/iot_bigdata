#include <stdio.h>

void main(){
	int num;
	printf("start! ");

	for(num=1; num<20; num++){
		if(num%2==0 || num%3==0)
			// �ݺ������� continue�� ������ �Ǹ� continue ������ �ݺ���
			// ������ ��ɹ��� ��� skip�ϰ� �ݺ��� ù��° �ٷ� �̵��Ѵ�.
			continue;
		printf("%d \n",num);
	}
	printf("end! \n");
}

