#include "main.h"

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL); /* validate size input */

	array = malloc(sizeof(char) * size); /* allocate memory */

	if (array == NULL)  /* validate memory */
		return (NULL);

	while (i < size) /* set array values to char c */
	{
		array[i] = c;
		i++;
	}
	array[i] = '\0';

	return (array);
}
