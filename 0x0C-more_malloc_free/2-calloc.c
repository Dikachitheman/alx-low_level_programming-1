#include "main.h"

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * and returns a pointer to the allocated memory.
 * @nmemb: number of array elements
 * @size: bytes of the elements of array
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i; /* match unsigned arguments */

	if (nmemb <= 0 || size <= 0) /* validate input */
		return (NULL);

	/* allocate memory and check if error */
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	/* set allocated memory values to zero */
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
