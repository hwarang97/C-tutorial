#include <stdio.h>

int main(void)
{
	int kor = 3;
	int eng = 5;
	int math = 4;
	int credits, res;
	double kscore = 4.8;
	double escore = 4.4;
	double mscore = 3.9;
	double grade;

	credits = kor + eng + math;
	grade = (kscore + escore + mscore) / 3.0;
	res = (credits > 10) && (grade > 4.0);

	printf("res: %d\n", res);

	return 0;
}