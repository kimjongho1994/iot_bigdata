#include <stdio.h>

void main(){
	int arr1[2][3][4];
	double arr2[5][5][5];
	printf("����2, ����3, ����4 int �� �迭:%d\n", sizeof(arr1));
	printf("����5, ����5, ����5 dounle�� �迭:%d\n", sizeof(arr2));
}