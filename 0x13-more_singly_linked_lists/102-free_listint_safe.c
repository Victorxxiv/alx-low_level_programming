#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Double pointer to the head node of the linked list.
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h; /* Current node being traversed */
	size_t count = 0; /* Count of nodes freed */
	listint_t *next; /* Pointer to store the next node */

	while (current != NULL)
	{
		/* Store the next node before freeing the current node */
		next = current->next;

		/* Free the current node */
		free(current);

		/* Move to the next node */
		current = next;

		/* Increment the count of nodes freed */
		count++;

		/* If we encounter the first node again, it means there's a loop */
		if (current == *h)
		{
			/* Set the head to NULL and return the count */
			*h = NULL;
			return (count);
		}
	}

	/* Set the head to NULL and return the count */
	*h = NULL;
	return (count);
}

