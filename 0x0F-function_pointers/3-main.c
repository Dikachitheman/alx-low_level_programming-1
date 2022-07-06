#include "3-calc.h"

/**
 * main - when user runs main, user should give two integers and an operator
 * and
 * main will calculate the math via a function pointer.
 * prints sum, difference, product, dividend, or remainder
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operator)(int, int);

	/* validate input of no. of arguments as its a requirement */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* convert string input to integer and point to the right operator*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	/* validate that the input operator is one of the given ones */
	if (operator == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* calculate via function pointer */
	printf("%d\n", operator(num1, num2));

	return (0);
}
