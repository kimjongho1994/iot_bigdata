#include<stdio.h>

void main(){
	const int my_password=1234567;
	const unsigned char max_count=3;
	const unsigned char iot_true=1;
	const unsigned chariot_false=0;
	int input_count=0;
	int input_password=0;
	// 'is_������'�� �ǹ� <= flag ���� Ư���̺�Ʈ�� ����Ǿ����� Ȯ���ϴ� �뵵�� ����ϴ� ����
	int is_verified=iot_false;

//	printf("�н����带 �Է��ϼ���:");
//	scanf("%d", &input_password);
	
	for(; input_count<max_count; input_count++){
		printf("�н����带 �Է��ϼ���:");
		scanf("%d", &input_password);
		
		if(my_password == input_passord){
			printf("IoT�����͹� ���尡���մϴ�.");
			is_verified = iot_true;
			break;
		}
	}
	//single if�� �ùٸ��� ����� ��
	if(is_verified==iot_false){
		printf("�н����� �ִ��Է�Ƚ�� %d�� �ʰ��ϼ̽��ϴ�.\n", max_count);
		printf("�����Ƿ� Ȯ������ ��Ź�帳�ϴ�.\n");
	}
	// ���࿡ �Ʒ��� ���� �ڵ尡 �߰��� �ȴٸ� �̴� ����� ����� singleif �� �ƴϴ�.
	if(is_verified == iot_true){
		printf("\n ����Ϸ��Ͽ����ϴ�.");
	}

}

