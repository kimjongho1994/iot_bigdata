#include<stdio.h>
// nested while (��ø�� while��)

void main(){
	int current_times = 2;
	int multiplier=0;

	printf("�������� ����!\n");
	/*
	 * 2 4 6 8 10 12 14 16 18 
	 * .
	 * .
	 * .
	 * 9 . . . . . . . . . 81
	 *
	 * �������� �����͸� table���·� ǥ���� �ڷᱸ���� ����.
	 * �̷��� ������ ������ 2�� �ݺ������� �����ϴ� ���� ���� ȿ�����̴�.
	 * ù��° while���� �������� ������ 'table�� ��'�� �����ϴ� ���̸�
	 * �ι�° while���� �������� ������ 'table�� ��'�� �����ϴ� �����̴�.
	 */
	
	while(current_times<10){ //�� ���� �����ϴ� �������� �ʱ�ȭ
		multiplier=1;
		
		printf("==== %d�� ====\n",current_times);
		while(multiplier<10){
			printf("%d * %d = %d\n", current_times,multiplier, current_times*multiplier);
			multiplier++; // ���� ���� �����ϱ� ���� ������ ����
		}
		printf("\n");
		current_times++; // ���� ���� �����ϱ� ���� ���� ����

	}
	
}
