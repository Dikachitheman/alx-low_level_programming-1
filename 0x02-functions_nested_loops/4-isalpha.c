#include "main.h"

/**
 * _isalpha - checks for alphabets.
 *
 * @c: The character locale
 *
 * Return: 1 for alphabets, 0 for others.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
