#include <stdio.h>

void main(){
	int num;
	int hour;
	int minute;
	int second;

	printf("�ʸ� �Է��ϼ���: ");
	scanf("%d", &num);

	hour = num/ 3600;
	minute = ( num % 3600 ) / 60;
	second = (num % 3600) % 60;

	printf("%d�ð� %d�� %d��", hour, minute, second);
}
