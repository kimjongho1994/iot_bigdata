//#include <stdio.h> <== Standard IO (ex: printf, scanf �� ����� �� ����.)

void main(){
	int military_serial_number=1472004818;
	int my_birth_day=940813;
	// const�� constant�� �ǹ��Ѵ�.
	const int ci_military_serial_number=1472004818; //ci const int �� �ǹ�
	const int ci_my_birth_day=940813; //ci_my_birth_day: const
	
	// ���� �ٲ��� �ʰ� ������ �ϰ����ϴ� ������ �����ʹ�
	// ���� �ٲٴ� ���� ��ü�� ������ ����ų �� �ִ�.
	ci_military_serial_number=1473884737;
	ci_my_birth_day=940811;
	ci_my_birth_day++;
	
	ci_military_serial_number=1473884738;
	ci_my_birth_day=940810;
	ci_my_birth_day++;
}
