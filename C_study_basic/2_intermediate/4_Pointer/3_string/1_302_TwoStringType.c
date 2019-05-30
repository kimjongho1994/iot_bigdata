#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
	char str1[]="My String";
	char* str2="Your String";
	printf("%s %s \n", str1, str2);

	str2="Our String";
	printf("%s %s \n", str1, str2);

	str1[0]='x';
	str2[0]='x';
	printf("%s %s \n", str1, str2);
	return 0;
}
/* 실행결과
My String Your String
My String Our String
xy String xur String
*/
