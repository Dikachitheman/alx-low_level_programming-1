#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: is the size of the square
 * Return: none
 */

void print_square(int size)
{
	int length;
	int breadth;

	if (size > 0)
		for (length = 1; length <= size; length++)
		{
			for (breadth = 1; breadth <= size; breadth++)
				_putchar(35);
			_putchar('\n');
		}
	else
		_putchar('\n');
}
