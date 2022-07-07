#include "variadic_functions.h"

/**
 * print_char - prints character
 * @valist: valist
 * Return: None.
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * print_int - prints integer
 * @valist: valist
 * Return: None.
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
 * print_float - prints float integer
 * @valist: valist
 * Return: None.
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 * print_string - prints string
 * @valist: valist
 * Return: None.
 */
void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char *
 *
 * Return: None.
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j = 0;
	va_list valist;

	/* using struct to present all cases of char to be printed */
	datatype choice[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };

	/* iterate format; if datatype matched, access function via struct */
	va_start(valist, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].func(valist);
				/* access va_arg later */
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(valist);
	printf("\n");
}
