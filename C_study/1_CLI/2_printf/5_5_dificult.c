#include <stdio.h>

void main(){
	printf("\n\n *2019년 5월 1일 복습\n");
	printf(" /* */ <== ANSI89 style 주석\n");
	printf("  //   <== ANSI89 style 주석\n");
	printf(" printf(\"%s\")\n","문자열");
	printf(" format string\n");
	printf(" print(%s),값);\n\n", "\"%[Format string]\"");
	printf(" 현재 온도: %d도,",22);
	printf(" 오존지수:%f,",0.075);
	printf(" 정확도: %d%%\n\n",99);
	printf(" 순위\t     영화명\t	변동폭\n\n");
	printf("   1\t 어벤져스엔드게임\t  -0\a\n");
	printf("   2\t    캡틴마블\t	  -0\a\n");
	printf("   3\t      생일\t	  +1\a\n");
	printf("   4\t     미성년\t    	  -1\a\n");
}
