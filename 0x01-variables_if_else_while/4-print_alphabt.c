#include <stdio.h>

/**
 * main - Print alphabets except q and e.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if ((alp != 'q') && (alp != 'e'))
		{
			putchar(alp);
		}
		alp++;

	}
	putchar('\n');

	return (0);
}
