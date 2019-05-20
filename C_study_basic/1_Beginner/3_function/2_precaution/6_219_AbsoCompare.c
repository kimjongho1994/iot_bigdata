#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {
	int num = 0;
	int i = 1;
	int j;

	printf("1ют╥б: ");

	j = i;

	for (i; i < 10001; i++) {
		{
			for (j; j > 0; j /= 10) {
				if (j % 10 == 8) 
					num++;
				

			}
		}
	}
	printf("%d", num);
}
