#include <stdio.h>

void main(){
	int num;
	int hour;
	int minute;
	int second;

	printf("초를 입력하세요: ");
	scanf("%d", &num);

	hour = num/ 3600;
	minute = ( num % 3600 ) / 60;
	second = (num % 3600) % 60;

	printf("%d시간 %d분 %d초", hour, minute, second);
}
