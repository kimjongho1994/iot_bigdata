#include <stdio.h>

void main(){
	int numerator=3;
	int denominator=4;
	double result;
	int i_result;

	// R-Value�� ����/������ ����� �����̴�
	// L-Value�� �Ǽ��̴�.
	// �� ��쿡 R-Value�� Implicit Type Casting�� �̷������.
	// ������ �������� ������ ������ �Ҽ��� ���ϰ� ���õȴ�.
	// ���� �������� �����̶� �� ���� ������ �ս��� �������� ����ȯ�� �ʿ��ϴ�.
	//result = numerator/denominator;
	
	// Explicit Type Casting (���� ����ȯ)
	// ����: (���̸�)[���/����]
	// Case1] �Ʒ� ���� numerator������ ���� ����ȯ �Ǿ����� ���� �Ǽ��� �������� ������ �ǹǷ�
	// ������ ������ dominator�� ������ ����ȯ(Implicit Type casting)�� �Ͼ��.
	//result = (double)numerator/denominator;

	// Case2] 
	result = numerator/(double)denominator;

	printf("������ ���: %f \n", result);

	// L-Value�� ���� R-Value�� �Ǽ��� ��쿡�� L-Value���� Implicit Type Casting��
	// �̷������ �ʴ´�. ������ Ÿ�� ��ü�� �ٲܼ� ���� �����̴�.
	// �� ���� �������� �ս�(Data Loss)�� �����ؾ� �Ѵ�.
	i_result = numerator/(double)denominator;
	printf("������ ���: %f \n", i_result);
}
