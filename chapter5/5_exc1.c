#include <stdio.h>

int main(void)
{
	int age = 25, chest = 95;
	char size;

	if (age < 20)
	{
		if (chest < 85)
		{
			printf("size: S");
		}
		else if (chest < 95)
		{
			printf("size: M");
		}
		else
		{
			printf("size: L");
		}
	}
	else
	{
		if (chest < 90)
		{
			printf("size: S");
		}
		else if (chest < 100)
		{
			printf("size: M");
		}
		else
		{
			printf("size: L");
		}
	}
	
	return 0;
}