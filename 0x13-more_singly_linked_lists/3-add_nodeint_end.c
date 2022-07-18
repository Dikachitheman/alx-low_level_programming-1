#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head of list
 * @n: n element
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t)); /* make space/ memory new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* set values */
	new_node->next = NULL;

	if (*head == NULL) /* account for empty list by pointing head to node */
		*head = new_node;
	else
	{
		temp = *head; /* set temp ptr to iterate w/o moving head ptr */

		while (temp->next != NULL) /* iterate till last node */
			temp = temp->next;
		temp->next = new_node; /* link last node to new node */
	}

	return (new_node);
}
