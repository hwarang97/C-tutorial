#include <stdio.h>


void sum(int target);


int main(void)
{
	sum(10);
	sum(100);
	
	return 0;
}


void sum(int target)
{
	int total = 0;
	for (int i = 1; i <= target; i++)
	{
		total += i;
	}
	printf("total: %d\n", total);
}
