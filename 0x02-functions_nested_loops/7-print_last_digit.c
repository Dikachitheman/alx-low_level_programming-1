#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *
 * @n: input number as an integer
 *
 * Return: last digit.
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));
	return (n % 10);
}
