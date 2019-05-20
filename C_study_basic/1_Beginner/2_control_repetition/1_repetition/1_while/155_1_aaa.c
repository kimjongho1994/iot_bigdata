#include <stdio.h>

void main(){
	int world_limit=0;
	int number=1;
	printf("Hello world!를 몇 번 입력할까요?: ");
	scanf("%d", &world_limit);
	while(world_limit >= number){
		printf("hello world!\n");
		number++;
	}
}
