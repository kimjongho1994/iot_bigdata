#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num[5];
	int ㅎ
	int 최대, 최소, 합

	pritnf("정수를 5개 입력하세요: ");
	scanf("%d %d %d %d %d",
		&num[]);

	for (ㅎ = 0; ㅎ < 5; ㅎ++) {
		printf("%d 숫자 입력: ", ㅎ+1);
	}
	
	최대 = 최소 = 합 = num[0];
	for (ㅎ = 1; ㅎ < 5; ㅎ++) {
		합 += num[ㅎ];
		if (최대 < num[ㅎ])
			최대 = num[ㅎ];
		if (최소 > num[ㅎ])
			최소 = num[ㅎ];
	}
	printf("%d = 최대값", 최대);
	printf("%d = 최솟값", 최소);
	printf("%d = 합", 합);
}
