#include <stdio.h>

void main(){
	printf("�� ��	�����а�	�г�\n");
	printf("%s	%s	%s\n\n","�� ��","�����а�","�г�");

	//%[-�Ǵ� ����][��üũ��][���佺Ʈ��]
	// -�� ���� ����, �����ϸ� ����������
	// ��üũ��: ��Ī�Ǵ� ���� �����ϴ� byte����
	// ���佺Ʈ��: c,d,ll, f, lf ..
	printf("%-8s %14s %5s \n","�� ��","�����а�","�г�");
	printf("%-8s %14s %5d \n","������","��ǻ�Ͱ���",3);
	printf("%-8s %14s %5d \n","������","���ڰ���",1);
	printf("%-8s %14s %5d \n\n","�ѻ��","�ɸ��а�",4);
	
	// 11~14 line�� ��ü ���� ����
	printf("%-8s %-14s %-5s \n","�� ��","�����а�","�г�");
	printf("%-8s %-14s %-5d \n","������","��ǻ�Ͱ���",3);
	printf("%-8s %-14s %-5d \n","������","���ڰ���",1);
	printf("%-8s %-14s %-5d \n\n","�ѻ��","�ɸ��а�",4);

	// 11~14 line�� ��ü ������ ����
	printf("%8s %14s %5s \n","�� ��","�����а�","�г�");
	printf("%8s %14s %5d \n","������","��ǻ�Ͱ���",3);
	printf("%8s %14s %5d \n","������","���ڰ���",1);
	printf("%8s %14s %5d \n\n","�ѻ��","�ɸ��а�",4);

	// 11~14 line�� ��ü �߾� ����1
	printf("%-8s %-14s %-5s \n","��  ��"," �����а�","�� ��");
	printf("%-8s %-14s %3d \n","������","��ǻ�Ͱ���",3);
	printf("%-8s %-14s %3d \n","������"," ���ڰ���",1);
	printf("%-8s %-14s %3d \n\n","�ѻ��"," �ɸ��а�",4);

	// 11~14 line�� ��ü �߾� ����2
	printf("%-8s %-14s %-5s \n","��  ��"," �����а�","�� ��");
	printf("%-8s %-14s   %-5d \n","������","��ǻ�Ͱ���",3);
	printf("%-8s %-14s   %-5d \n","������"," ���ڰ���",1);
	printf("%-8s %-14s   %-5d \n\n","�ѻ��"," �ɸ��а�",4);

	// 11~14 line�� ��ü �߾� ����3
	printf("%-8s %-14s %-5s \n","��  ��"," �����а�","�� ��");
	printf("%-8s %-14s %-5s \n","������","��ǻ�Ͱ���","  3");
	printf("%-8s %-14s %-5s \n","������"," ���ڰ���","  1");
	printf("%-8s %-14s %-5s \n\n","�ѻ��"," �ɸ��а�","  4");
}