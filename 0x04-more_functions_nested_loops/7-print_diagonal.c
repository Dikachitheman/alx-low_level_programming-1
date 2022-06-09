#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character '\' should be printed
 * Return: none
 */

void print_diagonal(int n)
{
	int draw;
	int space;

	if (n > 0)
		for (draw = 1; draw <= n; draw++)
		{
			for (space = 1; space < draw; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	else
		_putchar('\n');
}
