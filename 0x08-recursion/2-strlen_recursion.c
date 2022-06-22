#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: String length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);

	s++;

	len = 1 + (_strlen_recursion(s));
	return (len);
}
