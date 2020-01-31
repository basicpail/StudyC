#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main()
{
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483648;
	long long lln = 1234512345123451;
	unsigned int ui = 4294967295;

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);

	printf("unsigned int 최대값 %d\n", ui);
	ui = -1;
	printf("unsigned int 최대값 %u\n", ui);

	// type here

	system("pause");
	return 0;

}