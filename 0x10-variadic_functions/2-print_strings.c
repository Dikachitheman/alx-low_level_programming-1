#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(valist, int));
		if (separator != NULL && )
