#include <stdio.h>

void main(){
	unsigned long long my_password=486;
	unsigned long long input_password=0;

	printf("password�� �Է��ϼ���. (19�ڸ� �̳�)");
	scanf("%lld", &input_password);

//	if(486 == input_password){
	if(my_password == input_password){
		printf("Password�� ��ġ�մϴ�. ���� �����մϴ�.\n");
		printf("���� ����Ǿ� �ִ� PassWord�� %lld�Դϴ�.", my_password);
	}else{
		printf("Password�� ����ġ�մϴ�. ��ź�� �����ϴ�.\n");
	}

}
