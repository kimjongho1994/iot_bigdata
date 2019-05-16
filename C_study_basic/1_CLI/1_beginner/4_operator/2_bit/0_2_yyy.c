#include <stdio.h>

void main(){
	int num;
	printf("당신의 손가락 갯수 -1=");
	scanf("%d", &num);

	num = num << 2;
	printf("정답은%d입니다\n", num);

	num = num >> 1;
	printf("%d살도 이문제는 못마춥니다.\n", num);
}
