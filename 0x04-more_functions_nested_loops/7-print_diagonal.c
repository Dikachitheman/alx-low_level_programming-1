#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character '\' should be printed
 * Return: none
 */

void print_diagonal(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
	{
		_putchar(92);
	}
	_putchar('\n');
}
