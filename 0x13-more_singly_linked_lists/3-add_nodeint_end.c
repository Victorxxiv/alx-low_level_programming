#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the pointer of the head node of the linked list.
 * @n: Integer value to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node; /* Declare new node */
	listint_t *temp;     /* Declare temporary node */

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL); /* Return NULL if memory allocation fails */

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL; /* The new node will be the last, its next is NULL */

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Append the new node to the end */
	temp->next = new_node;

	return (new_node); /* Return the address of the new element */
}

