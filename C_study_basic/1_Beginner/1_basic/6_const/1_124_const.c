//#include<stdio.h> <= Standard IO( (ex)printf, scanf를 사용할 때 쓴다.)

void main(){
	int military_serial_number=1472004818; //military_serial_number:변수, 1473168454:상수
	int my_birth_day=101026;
	//const(=constant)
	const int ci_military_serial_number=1472004818; //ci(=const int)
	const int ci_my_birth_day=101006; // ci_my_birth_day : const.
	
	// 값이 바뀌지 않고 참조만 하고자하는 성격의 데이터는
	// 값을 바꾸는 행위 자체가 문제를 일으킬 수 있다.
	military_serial_number=1473168454;
	my_birth_day=101026;
	my_birth_day++;
	
/*	ci_military_serial_number=1546134687;
	ci_my_birth_day=661615;
	ci_my_birth_day++;
*/	
}
