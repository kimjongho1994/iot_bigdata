#include<stdio.h>

// ����: char, short Ÿ���� ��� ����� �������� ��ȭȮ��
int main(){
	char num1=1, num2=2, result1=9;
	short num3=300, num4=400, result2=0;
	char test_num1=100, test_num2=110, result3=0;

	printf("size of num1: %d, num2: %d\n", sizeof(num1), sizeof(num2));
	printf("size of num3: %d, num4: %d\n", sizeof(num3), sizeof(num4));
	printf("========================\n");

	// char, short �迭�� Ÿ���� ��������� 'expression���θ�' ������� ��쿡��
	// �ش� Ÿ�Ժ��� �� ū Ÿ���� �ӽú���(=Temporary Variable)�� ���������� �����ȴ�.
	// �ӽ� ������ ���α׷����� '������ �ʰ�' �����Ϸ��� ������ ���� '����'�Ѵ�.
	// ���� : ����ӵ��� ����, �������� ���� �����ȴ�. 
	// ���� : �޸� ���� �ʷ�, �������� ������, ������ϱ� �����.
	printf("size of char add: %d \n", sizeof(num1+num2));
	printf("size of short add: %d \n", sizeof(num3+num4));
	printf("test_num1(%d)+test_num2(%d)=%d\n\n", test_num1, test_num2,test_num1+test_num2);
 
	// ���� ����� '����Ÿ���� ������ ������ ���'���� ������ Ÿ�� ����� '����'�Ѵ�.
	// ���� : �޸𸮸� ����ȭ�� �� ����, �������� ���, ������� ������.
	// ���� : ����ӵ��� ��������� ���� �� ����.(�ݺ������� ����Ǵ� ���)
	//        ������ ���� �ְ�� �� ����.
	result1=num1+num2;
	result2=num3+num4;
	printf("size of result1 &result2: %d, %d\n", sizeof(result1), sizeof(result2));
	
	result3=test_num1+test_num2;
	printf("test_num1(%d)+test_num2(%d)=result3(%d)\n", test_num1, test_num2,result3);

}
