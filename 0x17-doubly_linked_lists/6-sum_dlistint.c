#include "lists.h"

/**
 * sum_dlistint - Returns sum of all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	/* Traverse the list and accumulate the sum of all data */
	while (current != NULL)
	{
		/* Add the data of the current node to the sum */
		sum += current->n;
		/* Move to the next node in the list */
		current = current->next;
	}

	return (sum);
}

