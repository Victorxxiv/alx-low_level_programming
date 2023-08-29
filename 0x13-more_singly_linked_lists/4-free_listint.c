#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head node of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp; /* Declare a temporary node */

	/* Traverse the linked list */
	while (head != NULL)
	{
		temp = head; /* Save the current node */
		head = head->next; /* Move to the next node */
		free(temp); /* Free the saved node */
	}
}

