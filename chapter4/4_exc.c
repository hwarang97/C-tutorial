#include <stdio.h>

int main(void)
{
	double op1 = 4.0;
	double op2 = 1.2;

	double sum = op1 + op2;
	double sub = op1 - op2;
	double mul = op1 * op2;
	double div = op1 / op2;

	printf("%.1lf + %.1lf = %.1lf\n", op1, op2, sum);
	printf("%.1lf + %.1lf = %.1lf\n", op1, op2, sub);
	printf("%.1lf + %.1lf = %.1lf\n", op1, op2, mul);
	printf("%.1lf + %.1lf = %.1lf\n", op1, op2, div);

	return 0;
}