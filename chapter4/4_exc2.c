#include <stdio.h>

int main()
{
	int math, english, tot;
	double avg;

	printf("math, enlish score: ");
	scanf("%d%d", &math, &english);

	tot = math + english;
	avg = tot / 2.0;

	printf("avg: %.1lf", avg);

	return 0;
}