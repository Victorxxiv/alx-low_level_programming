#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the pointer of the head node of the linked list.
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next; /* Store the next node */
		(*head)->next = prev; /* Reverse the next pointer */
		prev = *head; /* Move the prev pointer */
		*head = next; /* Move the head pointer */
	}

	*head = prev; /* Update the head to point to the new first node */
	return (*head);
}

