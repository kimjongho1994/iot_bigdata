#include <stdio.h>
//while([상수/변수/표현식])
//step1] while()안에 있는 상수,변수 또는 표현식을 평가한다
//step2] 평가한 결과(표현식)가 참(1)이면(변수나 상수는 0이 아닌값이면)
//		 while 이하의 Statement Block을 수행한다.
//       거짓(0)이면 Statement Block을 빠져나온다.
//step3] step2에서 참인경우 step1로 이동한다.
void main(){
	int world=7;
	int number=1;
	printf("world sector: %d\n",world);
	while(number<=50){
		printf("Hello guest%d!\n",number);
		number++;
	}
}
