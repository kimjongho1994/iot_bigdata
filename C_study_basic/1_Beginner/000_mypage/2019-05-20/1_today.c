#include <stdio.h>

void main() {
	int num[5];
	int ㅎ;
	int 최대, 최소, 합;


	for (ㅎ = 0; ㅎ < 5; ㅎ++) {
		printf("%d 숫자 입력: ", ㅎ+1);
		scanf("%d", &num[ㅎ]);
	}
	
	최대 = 최소 = 합 = num[0];
	for (ㅎ = 1; ㅎ < 5; ㅎ++) {
		합 += num[ㅎ];
		if (최대 < num[ㅎ])
			최대 = num[ㅎ];
		if (최소 > num[ㅎ])
			최소 = num[ㅎ];
	}
	printf("최대값 = %d\n", 최대);
	printf("최소값 = %d\n", 최소);
	printf("합 = %d\n", 합);
}

