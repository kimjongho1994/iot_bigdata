#include<stdio.h>

void main(){
    // ���ڿ��� "" �ȿ� ���Ǹ� �Ѵ�.
    // �׷� �������� �ڵ����� Null���� �߰����ȴ�.
    char str[] = "Good morning!";

    // char�� 1byte
    // G ~ !13���� ���� 13byte
    // ���⿡ Null �߰��Ǿ� 14byte
    printf("�迭 str�� ũ��: %d\n", sizeof(str));
    printf("�� ���� ������ ���: %c \n", str[13]);
    printf("�� ���� ������ ���: %d \n", str[13]);

    str[12]='?';
    printf("���ڿ� ���: %s\n", str);
       
}

