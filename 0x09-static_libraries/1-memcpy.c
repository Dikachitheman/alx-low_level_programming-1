#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy from source memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n; /* only accept positive sizes */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}
	return (dest);
}
