#include<stdio.h>

double CelToFah(double Cel){
	return 1.8 *Cel+32;
} 
double FahToCel(double Fah){
	return (Fah-32)/1.8;
} 


void main(){
	int sel;
	double number;
	printf("�Ʒ��� �� ���� �� ���ÿ�!\n");
	printf("1 �����µ��� ȭ���µ��� ��ȯ�ϱ�, 2ȭ���µ��� �����µ��� ��ȯ�ϱ�");
	printf("��ȣ�� �Է��ϼ���: ");
	scanf("%d", &sel);

	if (sel == 1){
		printf("�����µ��� �Է��ϼ���: ");
		scanf("%lf", &number);
		printf("��ȭ�� ȭ���µ�: %f\n", CelToFah(number));
	}else if(sel == 2){
		printf("ȭ���µ��� �Է��ϼ���: ");
		scanf("%lf", &number);
		printf("��ȭ�� �����µ�: %f\n", FahToCel(number));
	}else {
		printf("�߸��� ���� �Է��ϼ̽��ϴ�. ");
	}

}

