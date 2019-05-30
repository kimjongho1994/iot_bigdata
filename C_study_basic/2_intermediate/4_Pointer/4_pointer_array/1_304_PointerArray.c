#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
	int num1=10, num2=20, num3=30;
	int* arr[3]={&num1, &num2, &num3};

	printf("%p %d\n",arr[0], *arr[0]);
	printf("%p %d\n",arr[1], *arr[1]);
	printf("%p %d\n",arr[2], *arr[2]);
	return 0;
}
/* 실행결과
0045FB94 10
0045FB90 20
0045FB8C 30
*/
