#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295; /// 0xffff
	printf("%d\n", a); /// %d consider a as signed int type
	a = -1; /// usigned int can store minus value, but not error occused.
	printf("%u\n", a); /// %u consider a as usigned int type


	return 0;
}