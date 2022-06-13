#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
}
