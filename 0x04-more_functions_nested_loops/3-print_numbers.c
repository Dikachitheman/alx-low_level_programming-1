#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9.
 * Return: 0
 */

void print_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		_putchar(c);
		c++;
	}
	_putchar("\n");
}
