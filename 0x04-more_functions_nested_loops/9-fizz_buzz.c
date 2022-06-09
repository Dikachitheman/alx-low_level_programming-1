#include <stdio.h>

/**
 * main - print the numbers 1 to 100, followed by a new line
 * with multiples of 3 as 'Fizz', multiples of 5 as 'Buzz' and
 * multiples of both three and five as 'FizzBuzz'.
 * _putchar - prints characters
 * Return: 0 on success
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n < 100)
			printf(" ");
	}
	printf("\n");
	
	return (0);
}
