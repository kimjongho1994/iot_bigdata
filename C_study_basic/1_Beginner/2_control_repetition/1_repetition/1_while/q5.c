#include<stdio.h>
// nested while (중첩된 while문)

void main(){
	int current_times = 2;
	int multiplier=0;

	printf("구구단을 외자!\n");
	
	do{
		multiplier=1;
		printf("==== %d단 ====\n",current_times);
		
		do{ 	
			printf("%d * %d = %d\n", current_times,multiplier, current_times*multiplier);
			multiplier++;
		  while (multiplier<10);	
			printf("\n");
			current_times++; 

		}while(current_times<10);
 

	}
	
}

