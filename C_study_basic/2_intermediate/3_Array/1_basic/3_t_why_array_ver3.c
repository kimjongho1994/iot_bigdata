#include<stdio.h>

/* ȭ����� �䱸����
ù ��° ���ڸ� �Է��ϼ���: 1
�� ��° ���ڸ� �Է��ϼ���: 2
�� ��° ���ڸ� �Է��ϼ���: 3
�� ��° ���ڸ� �Է��ϼ���: 4
�ټ� ��° ���ڸ� �Է��ϼ���: 5
�Է��� ����(�Է� ������� ����): 1 2 3 4 5
����: 15, ���: 3
�� ��° ���ڴ� 3�Դϴ�.
*/
void main(){
	int number[5], total=0, average, index;
	const int max_count=5;

	for(index=0;index<max_count;index++){
		printf("%d ��° ���ڸ� �Է��ϼ���: ", index+1);
		scanf("%d", &number[index]);	
		total=total+number[index];
	}
	printf("�Է��� ����(�Է� ������� ����): ");

	for(index=0;index<max_count;index++){
		printf("%d ", number[index]);	
	}

	average=total/max_count;
	printf("\n����: %d, ���: %d\n", total, average);
	printf("%d ��° ���ڴ� %d�Դϴ�.\n",3,number[3]);

	printf("�ٽ� ��ȸ�ϰ� ���� ���� ������ �Է��ϼ���: ");
	scanf("%d", &index);
	printf("%d ��° ���ڴ� %d�Դϴ�.\n",index, number[index-1]);

}

