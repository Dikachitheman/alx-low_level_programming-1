#include "lists.h"

/**
 * sum_listint - sums up all data (n) of a listint_t linked list.
 * @head: head node
 *
 * Return: sum of the data (n) of a linked list, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
