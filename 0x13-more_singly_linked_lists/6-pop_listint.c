#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of list
 *
 * Return: the head node's data (n), if the linked list is empty 0.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL) /* account for empty linked list */
		return (0);

	temp = *head;

	n = temp->n; /* save data to return later */

	*head = temp->next; /* link head to next node */
	free(temp);

	return (n);
}
