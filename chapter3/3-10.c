#include <stdio.h>

int main(void)
{
	int age;
	double height;

	printf("age and height : ");
	scanf("%d%lf", &age, &height);
	printf("age: %d and height: %lf\n", age, height);

	return 0;
}