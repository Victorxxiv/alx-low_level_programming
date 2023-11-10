#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting from 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	/* Traverse the list until the desired index or end is reached */
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	/* If the desired index is reached, return the pointer to the node */
	if (i == index)
	{
		return (current);
	}

	/* If end of the list is reached before desired index, return NULL */
	return (NULL);
}

