#include <stdio.h>
#pragma warning (disable:4996)


void main() { // 함수 정의부
	// local Variable 변수 선언부 (선언 또는 선언, 초기화를 같이 한다.)
	// loval Variable 변수 선언부에만 변수를 선언하는 것은 
	// ANSI89 style이다.
	// int cnt;

	//int var1;
	// 아래와 같이 같은 scope에서 동일한 변수명을 사용할 수 없다.
//	int var1;


	for (int cnt = 0; cnt < 3; cnt++) {
		// 함수안에 {}안에 선언된 변수는 {}안에서만 접근이 가능하다.
		// local variable변수 선언부 이외의 중간에서 변수를 자유롭게
		// 선언하는 것은 ANSI99 style이다.
		// ANSI 99 style로 변수를 선언하는 것을 추천하지 않는다.
		// 유지보수성, 개발자의 실수를 유도한다.
		int num = 0;
		num++;
		printf("%d번째 반복, 지역변수 num은 %d\n", cnt+1, num);
	}

	// {}Scope상 num은 접근할 수 없는 변수이기 때문에
	// 아래코드는 컴파일 에러를 발생한다.
//  printf("최종 num은 %d\n",num);		
	//cnt 또한 for문 안의 {}scope에 해당한다.
//	printf("최종 cnt는 %d\n", cnt);
	
	// 이러한 {}Scope는 {}사용하는 모든 명령문에 동일하게 적용된다.
	// 아래 cnt, main함수의 최상위 {}scope를 가진다.
	// 반면 위의 cnt, main함수 밑의 for문 {}scope를 가진다.
	int cnt=0;
	
	while (1) {
		// 위 for문의 num과 다른 scope이기 때문에 동일한 이름으로 
		// 변수 선언이 가능하다.
		int num = 0;
		// 하위 {}Scope에서 상위 Scope에 있는 변수는 접근가능
		cnt++ ,num++;
		if (cnt > 3) {
			break;
		}
	}
	// 위의 cnt는 같은 Scope이고 하위Scope에서 상위 scope의 변수
	// 접근한 결과는 유효하다.
	printf("최종 cnt: %d\n", cnt);

//	printf("최종 num은 %d\n", num)
// ->  num은 while내부의 scope이기 때문에 접근 불가능
}