#include<stdio.h>
/* �Լ�����(Function Definition)
 * [��ȯ(return)Ÿ��] [�Լ���]([����Ÿ��=parameter(�Ķ����)][����(Argament)��1],,,){
 * [�鿩����] ��ɹ�1;
 * 		
 * 	      ��ɹ� N;
 * 	      [return][��ȯ��];
 * }
*/

void my_add(){
	int number1;
	int number2;
	int result;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d",&number1, &number2);

	printf("- ������ �������� ver1\n");
	printf("ù ��° �Է�: %d\n", number1);
	printf("�� ��° �Է�: %d\n", number2);

	result=number1+number2;
	printf("%d + %d = %d\n", number1, number2, result);
	printf("������ ���ᰡ �Ǿ����ϴ�. �����մϴ�.\n");

}
void main(){
	my_add();
	my_add();
}

