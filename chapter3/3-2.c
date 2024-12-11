#include <stdio.h>

int main(void)
{
	char ch1 = 'A';
	char ch2 = 65;

	printf("character %c ASCII value : %d\n", ch1, ch1);
	printf("character %c ASCII value : %d\n", ch2, ch2);
	
	

	int ch3 = (int)ch2;
	printf("character %c ASCII value : %d\n", ch3, ch3);

	return 0;
}