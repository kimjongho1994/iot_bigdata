#include<stdio.h>

void main(){
	int altitude=0;
	
	printf("���� �� %dm\n", altitude);

	altitude = altitude+1;
	printf("���� �� %dm\n", altitude);

	altitude += 1;
	printf("���� �� %dm\n", altitude);

	
	// �ڱ��ڽ��� ���� �����Ͽ��� ������ 
	// ����� ���� �� �ڽſ��� �Ҵ��� �ʿ䰡 ����.
	altitude = ++altitude;
	printf("���� �� %dm\n", altitude);
	
	// ++�� ����(increment)������
	// ����: ++���� or  ����++
	// ++altitude �� �ǹ��ϴ� ����
	// altitude = altitude+1�� �ǹ��Ѵ�.
	++altitude;
	printf("���� �� %dm\n", altitude);
	
	//���࿬��
	// ���� 1���� ��, ���� ������ �������� ����
	// �� ����, �� ó��
	printf("���� �� %dm\n", ++altitude);
	
	//���࿬��
	// ���� ������ ���� ������, ���� 1����
	// �� ó��, �� ����
	printf("���� �� %dm\n", altitude++);
	printf("���� ����� %dm\n", altitude);
	
	altitude++;
	printf("���� �� %dm\n", altitude);
	
	// �̷��� ������ ���� �����ڿ��� �����ϰ� ����ȴ�.
	// ���� : --���� or ����--
	// --altitude�� �ǹ��ϴ� ����
	// altitude = altitude-1;
}

