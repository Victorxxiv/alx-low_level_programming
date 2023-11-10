#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next_node;

	/* Initialize current pointer to the head of the list */
	current = head;

	/* Loop through the list until the end is reached (NULL) */
	while (current != NULL)
	{
		/* Save the pointer to the next node before freeing current */
		next_node = current->next;
		/* Free the memoery allocated for the current node */
		free(current);
		/* Move to the next node in the list */
		current = next_node;
	}
}

