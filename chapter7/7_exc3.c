#include <stdio.h>

int rec_func(int n);

int main(void)
{
	int res = rec_func(100);
	printf("sum: %d", res);
	
	return 0;
}

int rec_func(int n)
{
	int res = 0;
	if (n == 1) return 1;
	res += n + rec_func(n - 1);
	return res;
}