#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * Return: none
 */

void print_triangle(int size)
{
	int length;
	int height;
	int breadth;

	if (size <= 0)
		_putchar('\n');

	for (height = 1; height <= size; height++)
	{
		for (breadth = 1; breadth <= (size - height); breadth++)
			_putchar(' ');

		for (length = 1; length <= height; length++)
			_putchar(35);

		_putchar('\n');
	}
}
