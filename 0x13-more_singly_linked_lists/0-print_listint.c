#include "lists.h"

/**
 * print_listint - prints all the elements of a listint list.
 * @h: head of list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_of_nodes++;
	}

	return (no_of_nodes);
}
