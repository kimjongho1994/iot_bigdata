#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	char arr[100];
	int ぞ=0;

	printf("脊径: ");
	scanf("%s", arr);
	
	while (arr[ぞ] != '\0') {
		ぞ++;
	}

	ぞ--;

	while (ぞ != -1) {
		printf("%c", arr[ぞ]);
		ぞ--;
	}
}

