#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	char arr[100];
	int ��=0;

	printf("�Է�: ");
	scanf("%s", arr);

	while(arr[��] != '\0'){
		��++;
	}
	printf("%d", ��);
}
