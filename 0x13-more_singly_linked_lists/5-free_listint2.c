#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to the pointer of the head node of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp; /* Declare a temporary node */

	/* Traverse the linked list and free nodes */
	while (*head != NULL)
	{
		temp = *head; /* Save the current node */
		*head = (*head)->next; /* Move to the next node */
		free(temp); /* Free the saved node */
	}
}

