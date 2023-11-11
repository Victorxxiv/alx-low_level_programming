#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t.
 * @head: Pointer to the address of the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	/* If index is 0, delete the first node */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse to the specified index */
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	/* If end of the list is reached before the desired index, return -1 */
	if (current == NULL)
		return (-1);

	/* Update the next and prev pointers of the neighboring nodes */
	temp = current->prev;
	temp->next = current->next;

	if (current->next != NULL)
		current->next->prev = temp;

	free(current);

	return (1);
}

