#include<stdio.h>

void main(){
	int year=0; // �����⵵
	int sentence_year=20; // ������
	int jailbreak_year=7; // Ż������ �⵵
	int pysical_level=0; // ü��
	printf("%d�� ���� �޾� �Լ��մϴ�.\n", sentence_year);
	while(1){
			year++;
			if (year % 2 ){
				pysical_level++;
			}
			printf("%d�� ���Ծ����ϴ�.\n", year);
			if(year >= jailbreak_year){
				printf("Ż�� �õ�!\n\n");
				if(pysical_level > 5){
					break;
				}
			}
	}
	printf("Ż�� ����!!!!!\n");
}

