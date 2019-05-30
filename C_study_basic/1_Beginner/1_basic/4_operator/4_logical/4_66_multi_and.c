#include<stdio.h>

void main(){
/*
 ³í¸® And [Âü:1 / °ÅÁþ:0]
 AÁ¶°Ç BÁ¶°Ç CÁ¶°Ç  °á°ú
 °ÅÁþ  °ÅÁþ   °ÅÁþ  °ÅÁþ
 °ÅÁþ  °ÅÁþ    Âü   °ÅÁþ
 °ÅÁþ   Âü    °ÅÁþ  °ÅÁþ
 °ÅÁþ   Âü     Âü   °ÅÁþ
 Âü    °ÅÁþ   °ÅÁþ  °ÅÁþ
 Âü    °ÅÁþ    Âü   °ÅÁþ
 Âü     Âü    °ÅÁþ  °ÅÁþ
 Âü     Âü     Âü     Âü 
*/
	int num1=10;
	int num2=12;
	int num3=14;

	int result;

	printf("num1: %d, num2: %d\n", num1, num2);
    
	// °ÅÁþ && °ÅÁþ && °ÅÁþ
	result = (num1 == 11 && num2 == 13 && num3 == 12);
	printf("(num1 == 11 && num2 == 13 && num3 == 12) => Æò°¡°á°ú: %d\n",result);

	// °ÅÁþ  && °ÅÁþ && Âü 
	result = (num1 == 11 && num2 == 13 && num3 == 14);
	printf("(num1 == 11 && num2 == 13 && num3 == 14) => Æò°¡°á°ú: %d\n",result);

	// °ÅÁþ && Âü && °ÅÁþ
	result = (num1 == 11 && num2 == 12 && num3 == 13);
	printf("(num1 == 11 && num2 == 12 && num3 == 13) => Æò°¡°á°ú: %d\n",result);
	
	// °ÅÁþ && Âü && Âü
	result = (num1 == 11 && num2 == 12 && num3 == 14);
	printf("(num1 == 11 && num2 == 12 && num3 == 14) => Æò°¡°á°ú: %d\n",result);
	
	// Âü && °ÅÁþ && °ÅÁþ
	result = (num1 == 10 && num2 == 11 && num3 == 12);
	printf("(num1 == 10 && num2 == 11 && num3 == 12) => Æò°¡°á°ú: %d\n",result);

	//Âü && °ÅÁþ && Âü
	result = (num1 == 10 && num2 == 13 && num3 == 14);
	printf("(num1 == 10 && num2 == 13 && num3 == 14) => Æò°¡°á°ú: %d\n",result);
	
	// Âü && Âü && °ÅÁþ  
	result = (num1 == 10 && num2 == 12 && num3 == 12);
	printf("(num1 == 10 && num2 == 12 && num3 == 12) => Æò°¡°á°ú: %d\n",result);

	// Âü && Âü && Âü
	result = (num1 == 10 && num2 == 12 && num3 == 14);
	printf("(num1 == 10 && num2 == 12 && num3 == 14) => Æò°¡°á°ú: %d\n",result);
}
