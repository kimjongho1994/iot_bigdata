#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr[3]={0,1,2};

	// �迭�� �̸��� ù��° ��Ҹ� ��Ÿ���� �ּҴ� ����.
	printf("�迭�� �̸�: %p\n", arr);
	printf("ù ��° ���: %p\n", &arr[0]);
	printf("�� ��° ���: %p\n", &arr[1]);
	printf("�� ��° ���: %p\n", &arr[2]);

/*

�迭�� �̸�: 002CF994
ù ��° ���: 002CF994
�� ��° ���: 002CF998 <== int�� 4byte�̹Ƿ� ���� �ּҰ����� 4byte������ ��
�� ��° ���: 002CF99C

*/
}
