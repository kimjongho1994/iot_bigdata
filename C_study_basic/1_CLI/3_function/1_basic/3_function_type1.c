#include <stdio.h>
// �Լ� ���� 1
// ��ȯŸ��x, ����x (��ȯŸ���� ���� ���ڵ� ���� ���̽�)
// void�� �ǹ̴� ����(nothing), �������� �ʰڴ�.
// �׸��� ���ڰ� ���� ��쿡�� void�� ���� �� �� �ִ�.
// void my_add(){
// �Ʒ��� ���� �Լ��� ��ȯ Ÿ���� �����ϸ� �Ϲ������δ� ������ ���� �߻��Ѵ�. (Ư�� �Ӻ���� �����Ϸ�)
// �� ���� visual studio c �����Ϸ������� �̸� ����ϰ� �ִ�.
// ���� ���� ������ ���Ͽ� ����� �������� ����!
// my_add(void){
void my_add(void){ // �Լ� ���� (Function Definition)
	int number1;
	int number2;
	int result;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d",&number1,&number2);

	printf("\n- ������ ���� ���� ver1\n");
	printf("ù ��° �Է�: %d\n", number1);
	printf("�� ��° �Է�: %d\n", number2);
	
	result = number1 + number2;
	printf("%d + %d = %d\n",number1, number2, result);

}


void main(){ // nain�Լ��� C���� �ۼ��ϸ� ���α׷� ����� �ڵ����� ȣ��Ǵ� �Լ�
			 // ���� C ���α׷��� ������(Entry point)�� �ȴ�.
	printf("-- ���� ���α׷� ���� -- \n");
	
	my_add(); // �Լ� ȣ��(Function Call)

	printf(" -- ���� ���α׷� ���� -- \n");
}
