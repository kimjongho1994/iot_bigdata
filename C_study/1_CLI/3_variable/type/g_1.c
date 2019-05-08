#include <stdio.h>

void main(){
	int num1;
	int num2;
	int num3, num4;

	printf("좌 상단의x, y 값을 입력하세요: ");
	scanf("%d%d", &num1, &num2);
	printf("우 하단의x, y 값을 입력하세요: ");
	scanf("%d%d", &num3, &num4);
	
	num1 = num1;
	num2 = num2;
	num3 = num3;
	num4 = num4;
	printf("사각형의 넓이는 %d입니다.", (num3-num1)*(num4-num2));
}
