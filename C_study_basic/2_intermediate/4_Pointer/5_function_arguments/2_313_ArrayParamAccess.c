#include <stdio.h>
#pragma warning (disable:4996)

// void AddArayElem(int param[], int len){ // 또한 가능하다
void ShowArrayElem(int * param, int len){
	int i;
	for(i=0;i<len;i++)
		printf("%d ", param[i]);
	printf("\n");
}

//void AddArayElem(int param[], int len, int add){
void AddArayElem(int * param, int len, int add){
	int i;
	for (i=0;i<len;i++)
		param[i] += add;
}

int main(void) {
	int arr[3]={1,2,3};
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));
	
	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	return 0;
}
/* 출력결과 
2 3 4
4 5 6
7 8 9
*/
