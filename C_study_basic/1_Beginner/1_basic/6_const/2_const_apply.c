#include<stdio.h>

void main(){
	unsigned long long my_password=23162456454646467;
	unsigned long long input_password=0;

	printf("Password를 입력하세요. (19자리이내):");
	scanf("%lld", &input_password);

//if(23162456454646467==input_password)
	if(my_password==input_password){
		printf("Password가 일치합니다. 입장가능합니다.\n");
		printf("현재 저장되어 있는 Password는 %lld입니다.\n", my_password);
	}else{
		printf("Password가 불일치합니다. 돌아가세요.\n");
	}
	
}
