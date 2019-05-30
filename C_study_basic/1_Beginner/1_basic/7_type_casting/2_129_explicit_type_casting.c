#include<stdio.h>

void main(){
	int numerator=3;
	int denominator=4;
	double result;
	int i_result;

	// R-value ����/������ ����� �����̴�.
	// L-value �Ǽ��̴�.
	// �� ��쿡 R-value�� Implicit Type Casting�� �̷������.
	// ������ �������� ������ ������ �Ҽ��� ���ϰ� ���õȴ�.
	// ���� �������� �����̶� ������ ������ �ս��� �������� ����ȯ�� �ʿ��ϴ�.
	//result=numerator/denominator;

	
	// Explicit Type Casting = ���� ����ȯ
	// ����: (���̸�)[���/����]
	
	// Case1] 
	// �Ʒ� ���ô� numerator ������ ���� ����ȯ �Ǿ� �Ǽ��� �������� ������ �ǹǷ�
	// ������ ������ denominator �� ������ ����ȯ(Implicit Type Casting)�� �Ͼ��.
	//  result=(double)numerator/denominator
	
	// Case2] ci_my_birth_day=0
	result=numerator/(double)denominator;

	printf("������ ���: %f\n", result);

	// L-Value�� ���� R-Value�� �Ǽ��ΰ�쿡�� L-Value���� Implicit Type Casting��
	// �̷������ �ʴ´�. ������ Ÿ����ü�� �ٲ� �� ���� �����̴�.
	// �� ��쿡�� �������� �ս�(Data Loss)�� �����ؾ� �Ѵ�.
	i_result= numerator/(double)denominator;
	printf("������ ���: %d\n",i_result);
}
