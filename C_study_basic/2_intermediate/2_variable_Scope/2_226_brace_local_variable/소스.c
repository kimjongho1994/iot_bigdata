#include <stdio.h>
#pragma warning (disable:4996)


void main() { // �Լ� ���Ǻ�
	// local Variable ���� ����� (���� �Ǵ� ����, �ʱ�ȭ�� ���� �Ѵ�.)
	// loval Variable ���� ����ο��� ������ �����ϴ� ���� 
	// ANSI89 style�̴�.
	// int cnt;

	//int var1;
	// �Ʒ��� ���� ���� scope���� ������ �������� ����� �� ����.
//	int var1;


	for (int cnt = 0; cnt < 3; cnt++) {
		// �Լ��ȿ� {}�ȿ� ����� ������ {}�ȿ����� ������ �����ϴ�.
		// local variable���� ����� �̿��� �߰����� ������ �����Ӱ�
		// �����ϴ� ���� ANSI99 style�̴�.
		// ANSI 99 style�� ������ �����ϴ� ���� ��õ���� �ʴ´�.
		// ����������, �������� �Ǽ��� �����Ѵ�.
		int num = 0;
		num++;
		printf("%d��° �ݺ�, �������� num�� %d\n", cnt+1, num);
	}

	// {}Scope�� num�� ������ �� ���� �����̱� ������
	// �Ʒ��ڵ�� ������ ������ �߻��Ѵ�.
//  printf("���� num�� %d\n",num);		
	//cnt ���� for�� ���� {}scope�� �ش��Ѵ�.
//	printf("���� cnt�� %d\n", cnt);
	
	// �̷��� {}Scope�� {}����ϴ� ��� ��ɹ��� �����ϰ� ����ȴ�.
	// �Ʒ� cnt, main�Լ��� �ֻ��� {}scope�� ������.
	// �ݸ� ���� cnt, main�Լ� ���� for�� {}scope�� ������.
	int cnt=0;
	
	while (1) {
		// �� for���� num�� �ٸ� scope�̱� ������ ������ �̸����� 
		// ���� ������ �����ϴ�.
		int num = 0;
		// ���� {}Scope���� ���� Scope�� �ִ� ������ ���ٰ���
		cnt++ ,num++;
		if (cnt > 3) {
			break;
		}
	}
	// ���� cnt�� ���� Scope�̰� ����Scope���� ���� scope�� ����
	// ������ ����� ��ȿ�ϴ�.
	printf("���� cnt: %d\n", cnt);

//	printf("���� num�� %d\n", num)
// ->  num�� while������ scope�̱� ������ ���� �Ұ���
}