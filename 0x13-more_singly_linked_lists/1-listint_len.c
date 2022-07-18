#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked "listint_t" list.
 * @h: head of list
 *
 * Return: Number of elements in a linked "listint_int" list.
 */
size_t listint_len(const listint_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		no_of_nodes++;
	}

	return (no_of_nodes);
}
