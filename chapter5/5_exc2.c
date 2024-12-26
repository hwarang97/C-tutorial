#include <stdio.h>

int main(void)
{
	int op1, op2;
	char op;
	int res;

	printf("expression: ");
	scanf("%d %c%d", &op1, &op, &op2);


	switch (op)
	{
	case '*': // charecter is converted to ASCII code in compiling.
		res = op1 * op2;
		break;
	case '+':
		res = op1 + op2;
		break;
	case '-':
		res = op1 - op2;
		break;
	case '/':
		res = op1 / op2;
		break;
	}

	printf("%d%c%d=%d", op1, op, op2, res);

	return 0;
}