#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);

	if (index > 32)
		return (-1);
	return (bit & 1);
}
