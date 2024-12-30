#include <stdio.h>

int sum(int op1, int op2);

int main(void)
{
	int a = 10, b = 20;
	int result = sum(a, b);

	printf("sum: %d", result);
	
	return 0;
}

int sum(int op1, int op2)
{
	return op1 + op2;
}