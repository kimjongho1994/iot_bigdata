#include <stdio.h>

void main(){
//	unsigned long long my_password=486;
//	unsigned long long input_password=0;
//	const�� �̸��� ��� �빮�ڷ� ���� ���� ����(Naming Convetion)�̴�.
	const unsigned long long MY_PASSWORD=486;
	unsigned long long input_password=0;
	const int MY_MAX;
	// MY_MAX�� ���� ���ʷ� ����(define) ������ �� ������ MY_MAX�� ����Ǵ�
	// �������� �ʱ�ȭ �Ǿ����Ƿ� �Ʒ� ������ const�� ���� ������ �õ��ϴ�
	// ���̱� ������ ������ ������ �߻��Ѵ�.
	// ���� const�� ������ ����� ���ÿ� �ʱⰪ�� �Ҵ��Ͽ��� �Ѵ�.
	// MY_MAX=10000;

	printf("password�� �Է��ϼ���. (19�ڸ� �̳�)");
	scanf("%lld", &input_password);

//	if(486 == input_password){
	if(MY_PASSWORD == input_password){
		printf("Password�� ��ġ�մϴ�. ���� �����մϴ�.\n");
		printf("���� ����Ǿ� �ִ� PassWord�� %lld�Դϴ�.", MY_PASSWORD);
	}else{
		printf("Password�� ����ġ�մϴ�. ��ź�� �����ϴ�.\n");
	}

	printf("MY_MAX: %d\n", MY_MAX);
}
