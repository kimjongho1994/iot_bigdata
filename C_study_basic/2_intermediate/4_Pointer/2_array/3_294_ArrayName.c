#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr[3] = {15, 25, 35};
//	int * ptr= &arr[0];
	int * ptr=arr;

	printf("%d %d\n", ptr[0], arr[0]);
	printf("%d %d\n", ptr[1], arr[1]);
	printf("%d %d\n", ptr[2], arr[2]);
	printf("%d %d\n", *ptr, *arr);
}
