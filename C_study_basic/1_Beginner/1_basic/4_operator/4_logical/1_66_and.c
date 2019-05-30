#include<stdio.h>

void main(){
/*
 ³í¸® And [Âü:1 / °ÅÁþ:0]
 AÁ¶°Ç BÁ¶°Ç °á°ú
 °ÅÁþ  °ÅÁþ  °ÅÁþ
  Âü    °ÅÁþ  °ÅÁþ
 °ÅÁþ   Âü   °ÅÁþ
  Âü     Âü    Âü
*/
	int num1=10;
	int num2=12;
	int result;

	printf("num1: %d, num2: %d\n", num1, num2);
    
	// °ÅÁþ && °ÅÁþ
	result = (num1 != 10 && num2 != 12);
	printf("(num1 != 10 && num2 != 12) => Æò°¡°á°ú: %d\n",result);

	// Âü && °ÅÁþ
	result = (num1 == 10 && num2 != 12);
	printf("(num1 == 10 && num2 != 12) => Æò°¡°á°ú: %d\n",result);

	// °ÅÁþ && Âü
	result = (num1 != 10 && num2 == 12);
	printf("(num1 != 10 && num2 == 12) => Æò°¡°á°ú: %d\n",result);

	// Âü && Âü
	result = (num1 == 10 && num2 == 12);
	printf("(num1 == 10 && num2 == 12) => Æò°¡°á°ú: %d\n",result);
}
