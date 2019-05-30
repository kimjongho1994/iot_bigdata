#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	char* line1 = "Dear Deam";
	char* line2 = "Hello my friend";
	char* line3 = "Long time no see";


	printf(" fputs test ---- \n");
	printf("File 10을 아직 안배웠으므로 line1~3을 읽어왔다고 가정\n");
	fputs(line1, stdout); putchar('\n');
	fputs(line2, stdout); putchar('\n');
	fputs(line3, stdout); putchar('\n');
}
