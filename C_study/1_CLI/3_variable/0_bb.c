#include <stdio.h>

void main(){
	int int_max=2147483647;
	short short_max=32767;
	char char_max=127;
	long long_max=2147483647;
	unsigned unsigned_max=4294967295;
	unsigned char unsignedchar_max=255;
	unsigned short unsignedshort_max=65535;
	unsigned long unsignedlong_max=4294967295;
	long long longlong_max=9223372036854775807;
	unsigned long long unsignedlonglong_max=18446744073709551615;
	float float_max=3.4E+/-38;
	double double_max=1.7E+/-308;
	long double longdouble_max= 423643;

	printf("int 최대값: %d\n", int_max);
	printf("short 최대값: %d\n", short_max);
	printf("char 최대값: %d\n", char_max);
	printf("long 최대값: %ld\n", long_max);
	printf("unsigned 최대값: %u\n", unsigned_max);
	printf("unsigned char 최대값: %u\n", unsignedchar_max);
	printf("unsigned short 최대값: %u\n", unsignedshort_max);
	printf("unsigned long 최대값: %lu\n", unsignedlong_max);
	printf("long long 최대값: %lld\n", longlong_max);
	printf("unsigned long long 최대값: %llu\n", unsignedlonglong_max);
	printf("float 최대값: %f\n", float_max);
	printf("double 최대값: %f\n", double_max);
	printf("longdouble 최대값: %lf\n", longdouble_max);
}
