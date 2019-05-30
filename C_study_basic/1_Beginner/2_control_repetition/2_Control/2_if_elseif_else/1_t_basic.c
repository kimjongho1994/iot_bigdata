#include<stdio.h>
void main()
	int num;
	printf("정수입력: ");
	scanf("%d", &num);

	// if else는 위에 있는 if()가 참이면 나머지 elseif 조건을 확인하지
	// 않고 전체 if elseif 구조에서 빠져나온다.
	// if elseif의 조건은 서로 중복이 되지 않아야 하며 중복이 되지 않는
	// 조건으로 if elseif로 구성하였을 때 single if로 작성하는 것보다
	// 불필요한 조건을 체크하는 명령어 수행을 막을 수 있다.
	if(num<0){
		printf("입력한 값은 0보다 작다. \n");
	}
	else if(num>0){
		printf("입력한 값은 0보다 크다. \n");
	}
	else if(num==0){
		printf("입력한 값은 0이다. \n");
	}
	return 0;
}

