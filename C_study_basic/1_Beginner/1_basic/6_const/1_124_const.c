//#include<stdio.h> <= Standard IO( (ex)printf, scanf�� ����� �� ����.)

void main(){
	int military_serial_number=1472004818; //military_serial_number:����, 1473168454:���
	int my_birth_day=101026;
	//const(=constant)
	const int ci_military_serial_number=1472004818; //ci(=const int)
	const int ci_my_birth_day=101006; // ci_my_birth_day : const.
	
	// ���� �ٲ��� �ʰ� ������ �ϰ����ϴ� ������ �����ʹ�
	// ���� �ٲٴ� ���� ��ü�� ������ ����ų �� �ִ�.
	military_serial_number=1473168454;
	my_birth_day=101026;
	my_birth_day++;
	
/*	ci_military_serial_number=1546134687;
	ci_my_birth_day=661615;
	ci_my_birth_day++;
*/	
}
