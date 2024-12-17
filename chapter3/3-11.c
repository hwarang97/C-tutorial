#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("grade : ");
	scanf("%c", &grade);

	printf("name : ");
	scanf("%s", &name);

	printf("%s's grade : %c", name, grade);
	
	return 0;
}