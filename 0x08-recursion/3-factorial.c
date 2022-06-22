#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number
 *
 * Return: -1 if n is lower than 0 to indicate an error else it returns the
 * factorial of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}

	else
		return (-1);
}
