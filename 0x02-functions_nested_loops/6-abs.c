#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 *
 * @i: To check the integer
 *
 * Return: Absolute value
 */

int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	return (0);
}
