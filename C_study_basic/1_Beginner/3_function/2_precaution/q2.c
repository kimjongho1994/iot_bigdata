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
	printf("아래의 두 가지 중 고르시오!\n");
	printf("1 섭씨온도를 화씨온도로 변환하기, 2화씨온도를 섭씨온도로 변환하기");
	printf("번호를 입력하세요: ");
	scanf("%d", &sel);

	if (sel == 1){
		printf("섭씨온도를 입력하세요: ");
		scanf("%lf", &number);
		printf("변화된 화씨온도: %f\n", CelToFah(number));
	}else if(sel == 2){
		printf("화씨온도를 입력하세요: ");
		scanf("%lf", &number);
		printf("변화된 섭씨온도: %f\n", FahToCel(number));
	}else {
		printf("잘못된 값을 입력하셨습니다. ");
	}

}

