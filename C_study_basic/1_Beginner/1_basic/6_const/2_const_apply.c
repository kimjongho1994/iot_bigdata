#include<stdio.h>

void main(){
	unsigned long long my_password=23162456454646467;
	unsigned long long input_password=0;

	printf("Password�� �Է��ϼ���. (19�ڸ��̳�):");
	scanf("%lld", &input_password);

//if(23162456454646467==input_password)
	if(my_password==input_password){
		printf("Password�� ��ġ�մϴ�. ���尡���մϴ�.\n");
		printf("���� ����Ǿ� �ִ� Password�� %lld�Դϴ�.\n", my_password);
	}else{
		printf("Password�� ����ġ�մϴ�. ���ư�����.\n");
	}
	
}
