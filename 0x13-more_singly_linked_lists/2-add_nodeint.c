#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: head of a list
 * @n: n element
 *
 * Return: address of the new element, NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t)); /* creating new node */

	if (new == NULL)
		return (NULL);

	new_node->n = n; /* setting values */
	new_node->next = *head; /* first link new node to point to first node */
	*head = new_node; /* then switch list pointer to point to new node */

	return (*head);
}
