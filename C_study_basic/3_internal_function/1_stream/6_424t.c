#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	char* line1 = "Dear Deam";
	char* line2 = "Hello my friend";
	char* line3 = "Long time no see";


	printf(" fputs test ---- \n");
	printf("File 10�� ���� �ȹ�����Ƿ� line1~3�� �о�Դٰ� ����\n");
	fputs(line1, stdout); putchar('\n');
	fputs(line2, stdout); putchar('\n');
	fputs(line3, stdout); putchar('\n');
}
