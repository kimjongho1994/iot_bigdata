#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
	char * strArr[3]={"Simple", "My String", "Array"};
	printf("%s \n", strArr[0]);
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);
	return 0;
}
