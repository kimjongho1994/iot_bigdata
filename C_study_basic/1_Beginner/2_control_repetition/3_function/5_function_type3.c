#include<stdio.h>
// �Լ� ����3
// ��ȯŸ�� O, ���� X(��ȯŸ���� �ְ� ���ڴ� ���� ���̽�)
// ����: ȣ���ϴ� �ʿ����� �Է¿� ���Ͽ� �Ű澲�� �ʾƵ� �ǰ�
// 	������ ������� �޾Ƽ� ó���� �� �ִ�.
// ����: �Լ����� �Է��� ó���ؾ� �ϴ� �δ��� �߻��Ѵ�.
int my_add(void){ //�Լ� ���� (Function Definition)
	int number1;
	int number2;
	int operation_result;

	printf("\n�� ���� �Է��ϼ���: ");
	scanf("%d %d",&number1, &number2);

	printf("\n- ������ �������� ver1\n");
	printf("ù ��° �Է�: %d\n", number1);
	printf("�� ��° �Է�: %d\n", number2);

	operation_result=number1+number2;
	printf("%d + %d = ", number1, number2);
	
	// return number1+number2; <= expression�� �ְ� ���� ���� return�ϴ� ���
	return operation_result; // ������ return�ϴ� ���
}
void main(){ 

/*	int result;
	result=my_add(); //�Լ� ȣ��(Function Definition)
//my_add() =result; => �������� �������� �ʴ� �߸��� ����� ��
	printf("%d", result);
*/
	printf("%d\n", my_add());
	//printf("%d %d %d %d\n ", my_add(), my_subtraction(), my_multiplication(), my_division());
}

