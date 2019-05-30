#include <stdio.h>
#pragma warning (disable:4996)

// Call By Value
// ���� , �Լ� ����� ����� �Ϲ������� return �Ѵ�.
int SquareByValue(int num){
    return num*num; //  �������� return ������ ��ȯ
}
// Call By Reference
// - ����, �Լ��� ����� 2�� �̻��� �� ����� �� �ִ�.
// - �Լ��� ���� ũ�Ⱑ Ŭ ��쿡 �޸� ȿ������ ���ؼ� ����Ѵ�.
//
// �̷��� ��� return���� �Լ������� 
// ���������� ����Ǿ������� �ǹ̷� ����� �� �ִ�.
void SquareByReference(int * ptr){
//   int num = *ptr;
//   *ptr = num*num;	// �������� ���� �ּҹ����� ���� ����.
     *ptr = *ptr * (*ptr); //*ptr * *ptr; => �ּҿ����� ���ܳ� �� ����.
// step 1] *ptr = 10 * (*ptr);
// step 2] *ptr = 10 * 10;
// step 3] *ptr = 100;
}

int main(void) {
	int num=10;
	printf("%d \n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d \n", num);
	return 0;
}
/* ��°��
  100
  100
*/
