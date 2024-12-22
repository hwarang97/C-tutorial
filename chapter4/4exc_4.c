#include <stdio.h>

int main(void)
{
	int seats = 70;
	int audience = 65;
	double rate = (double)audience / (double)seats * 100;
	
	printf("rate: %.1lf%%", rate);

	return 0;
}