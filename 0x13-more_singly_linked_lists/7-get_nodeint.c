#include "lists.h"

/**
 * get_nodeint_at_index  - returns the nth node of a listint_t linked list.
 * @head: head node
 * @index: is the index of the node, starting at 0
 *
 * Return: the nth node of the linked list, NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL) /* iterate until list ends */
	{
		head = head->next;
		i++;
	}

	if (i == index) /* check that index was within list size */
		return (head);

	return (NULL);
}
