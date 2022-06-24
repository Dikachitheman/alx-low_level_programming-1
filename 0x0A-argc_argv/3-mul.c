#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0 unless error when two arguments aren't given, then 1.
 */

int main(int argc, char *argv[])
{
	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* multiply two arguments passed via cmd line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
