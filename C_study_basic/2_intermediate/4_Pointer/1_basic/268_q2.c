#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char word[100];
	int length = 0, i;
	char temp;

	printf("���ܾ� �ϳ��� �Է��ϼ��� : ");
	scanf("%s", word);

	while (word[length] != '\0') // �켱 �Է¹��� ���ܾ� ���̸� ���
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = word[i];
		word[i] = word[(length - i) - 1];
		word[(length - i) - 1] = temp;
	}
	printf("������ ���ܾ� : %s \n", word);
}

// �������, ����ڰ� ¦������ ���ܾ �Է��ϸ� �¿� ��Ī
// Ȧ������ �ܾ �Է��Ѵٸ� �߾��� �������� ��Ī