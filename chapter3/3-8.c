#include <stdio.h>

int main(void)
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("tax : %.2f\n", tax);
	printf("tax : %.2lf\n", tax);
	
	return 0;
}