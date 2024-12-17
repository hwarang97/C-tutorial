#include <stdio.h>

int main(void)
{
	char fruit[10] = "strawberry";

	printf("strawberry : %s\n", fruit);
	printf("strawberry jam : %s %s\n", fruit, "jam");
	
	fruit = "banana";

	return 0;
}