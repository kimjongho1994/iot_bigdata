#include<stdio.h>

void main(){

/*
  d : 부호 있는 10진수 정수(char, short, int 계열)
hhd: 정수형 char 
hd : short
 ld : long
lld : long long
llu : unsinged long long
  u : 부호 없는 10진수 정수(unsigned int, unsigned char, unsigned short)
  f : float, double
 Lf : double, long double 
*/

	int int_max=2147483647;
	int int_max_test=2147483647;
	signed int sint_max=2147483647;
	unsigned int uint_max=4294967295;
	unsigned uint_max=4294967295;
	char char_max=127;
	unsigned char unsigned_char=255;
        short short_max= 32767;
	short int short_int_max=32767;
        signed short int s_short_int_max=32767;
	unsigned short int uint_short_int_max=65535;
	long long_max=2147483647;
	signed long int sint_long_int_max=2147783647;
	unsigned long int uint_long_int_min=0;
	long long long_max=9223372036854775807;
	unsigned long long uint_long_long_min=0;
	float float_min=1.12345678912345678912;
	double double_min=1.12345678912345678912;
	long double long_double_min=1.12345678912345678912;

	printf("int 최댓값 : %d\n", int_max);
	//Visual studio 2019 컴파일러에서 int를 4byte로 처리하기 때문에
	//int type으로는 2,147,483,647 이상의 값을 표현할 수 없다.
//	printf("int_max + 1 : %d\n", int_max_test);
	printf("signed int 최댓값: %d\n", sint_max);
	printf("unsigned int 최댓값: %u\n", uint_max);
	printf("unsigned int 최댓값: %u\n", uint_max);
	printf("char 최댓값: %d\n", char_max);
	printf("unsigned char 최댓값: %u\n", unsigned_char);
	printf("short 최댓값: %d\n", short_max);
	printf("short int 최댓값: %d\n", short_int_max);
	printf("short 최댓값: %d\n", s_short_int_max);
	printf("unsigned short int 최댓값: %u\n", uint_short_int_max);
	printf("long 최댓값: %ld\n", long_max); 
	printf("signed long int 최댓값: %ld\n", sint_long_int_max); 
	printf("unsigned long int 최솟값: %ld\n", uint_long_int_min); 
	printf("long long 최댓값: %lld\n", long_long_max);
	printf("unsigned long long 최솟값: %lld\n",uint_long_long_min);


}
