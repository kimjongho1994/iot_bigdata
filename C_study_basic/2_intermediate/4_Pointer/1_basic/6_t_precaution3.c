#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num=7;
	double *pnum;
	
	// ����Ʈ ������ ���� Ÿ�Կ� ������ �ּҸ� �Ҵ� ���� �� �ִ�.
	// ��Ȳ�� ���� �پ��� ������ �߻��Ѵ�.
	*pnum = &num;

	printf("*num: %d\n", num);
	printf("*pnum: %lf\n", *pnum);
}
