#include <stdio.h>

int main(void)
{
	int a = 20;
	int res = 10 < a < 20;
	int res2 = (10 < a) && (a < 20);

	printf("res: %d\n", res);
	printf("res2: %d\n", res2);

	return 0;
}