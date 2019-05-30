#include <stdio.h>

void main(void){
	int ch;

	while(1){
	    ch = getchar();
	    if(ch==EOF)
	        break;
	    putchar(ch);
	}
	
}
