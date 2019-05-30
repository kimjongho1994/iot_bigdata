#include <stdio.h>
#pragma warning (disable:4996)
void Swap3(int * ptr1, int * ptr2, int * ptr3){
	int temp = *ptr3;
	*ptr3 = *ptr2;
	*ptr2= *ptr1;
	*ptr1= temp;
}
int main(void){
	int num1=10, num2=20, num3=30;
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}
/* 출력결과
  30 10 20
*/
