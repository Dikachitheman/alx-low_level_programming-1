#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int to be converted
 *
 * Return: None
 */
void print_binary(unsigned long int n)
{
	int len = 0;

	while (len >= 0)
	{
		if ((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0');

		len--;
	}
}
