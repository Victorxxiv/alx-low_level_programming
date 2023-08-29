#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the pointer of the head node of the linked list.
 * Return: The head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp; /* Declare a temporary node */
	int data = 0; /* Initialize data to 0 */

	/* If the list is empty, return 0 */
	if (*head == NULL)
		return (data);

	temp = *head; /* Save the head node */
	data = temp->n; /* Get the data from the head node */
	*head = (*head)->next; /* Move the head pointer to the next node */
	free(temp); /* Free the original head node */

	return (data); /* Return the head node's data */
}

