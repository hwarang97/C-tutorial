#include <stdio.h>

int main(void)
{
	int target;
	printf("input: ");
	scanf_s("%d", &target);

	int cnt = 0;
	for (int current = 2; current < target; current++)
	{
		int flag = 1;
		for (int i = 2; i < current; i++)
		{
			if (current % i == 0)
			{
				flag = 0;
				break;
			}
		}

		if (flag)
		{
			printf("%2d\t", current);
			cnt++;

			if (cnt % 5 == 0)
			{
				printf("\n");
			}
		}
		
	}
	
	return 0;
}