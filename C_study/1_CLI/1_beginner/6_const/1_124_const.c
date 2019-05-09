//#include <stdio.h> <== Standard IO (ex: printf, scanf 를 사용할 떄 쓴다.)

void main(){
	int military_serial_number=1472004818;
	int my_birth_day=940813;
	// const는 constant를 의미한다.
	const int ci_military_serial_number=1472004818; //ci const int 를 의미
	const int ci_my_birth_day=940813; //ci_my_birth_day: const
	
	// 값이 바뀌지 않고 참조만 하고자하는 성격의 데이터는
	// 값을 바꾸는 행위 자체가 문제를 일으킬 수 있다.
	ci_military_serial_number=1473884737;
	ci_my_birth_day=940811;
	ci_my_birth_day++;
	
	ci_military_serial_number=1473884738;
	ci_my_birth_day=940810;
	ci_my_birth_day++;
}
