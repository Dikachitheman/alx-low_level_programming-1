#include "main.h"
#define NULL 0

/**
 * _strchr - locates 1st occurence of char in string and returns pointer there
 * @s: string to search
 * @c: target character
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
			return (NULL);
		else if (*(s + i) == c)
			return (s + i);
		s++;
	}

	return (s + i);
}
