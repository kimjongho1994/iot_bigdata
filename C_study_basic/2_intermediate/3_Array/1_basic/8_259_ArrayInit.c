#include<stdio.h>

void main(){
    int arr1[5]={1,2,3,4,5}; 
    int arr2[]={1,2,3,4,5,6,7};
    int arr3[5]={1,2};
    int ar1Len, ar2Len, ar3Len,i;

    printf("�迭  ar1�� ũ��: %d\n", sizeof(arr1));   
    printf("�迭  ar2�� ũ��: %d\n", sizeof(arr2));   
    printf("�迭  ar3�� ũ��: %d\n", sizeof(arr3));   

    ar1Len = sizeof(arr1) / sizeof(int);
    ar2Len = sizeof(arr2) / sizeof(int);
    ar3Len = sizeof(arr3) / sizeof(int);

    for(i=0;i<ar1Len;i++)
	    printf("%d ", arr1[i]);
    printf("\n");

    for(i=0;i<ar2Len;i++)
	    printf("%d ", arr2[i]);
    printf("\n");

    for(i=0;i<ar3Len;i++)
	    printf("%d ", arr3[i]);
    printf("\n");

}
/* ��¹�
�迭  ar1�� ũ��: 20 // int :4 => 4x5=20
�迭  ar2�� ũ��: 28
�迭  ar3�� ũ��: 20
1 2 3 4 5
1 2 3 4 5 6 7
1 2 0 0 0
*/
