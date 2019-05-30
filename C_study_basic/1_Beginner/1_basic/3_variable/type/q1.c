#include<stdio.h>

void main(){

	int right_x;
	int right_y;
	int left_x;
	int left_y;
	int result;

	printf("좌 상단의 x,y좌표: ");
	scanf("%d %d", &left_x, &left_y);

	printf("우 하단의 x,y좌표: ");
	scanf("%d %d", &right_x, &right_y);

	result=(right_x-left_x)*(right_y-left_y);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n", result);

}
