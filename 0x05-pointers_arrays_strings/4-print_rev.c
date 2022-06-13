#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to print in reverse
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;

	/* iterate to find length of string and point to last character */
	for (i = 0; s[i] != '\0'; i++)
		;

	/* print string reversed */
	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
