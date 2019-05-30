#include <stdio.h>
#pragma warning (disable:4996) 

int main(void) {
	int arr2d[3][3];
	int iarr[3];
	double darr[3];

	printf("%p \n", arr2d);
	printf("%p \n", arr2d[0]);
	printf("%p \n\n", &arr2d[0][0]);

	printf("%p \n", arr2d[1]);
	printf("%p \n\n", &arr2d[1][0]);

	printf("%p \n", arr2d[2]);
	printf("%p \n\n", &arr2d[2][0]);

	printf("sizeof(arr2d): %d \n", sizeof(arr2d));
	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));
	
	printf("\n%p %p \n", iarr, iarr+1); // 0039FD24 0039FD28
	printf("\n%p %p\n", darr, darr+1); // 0039FD0C 0039FD14


	return 0;
}
