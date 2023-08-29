#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (!h || !*h)
		return (0);

	current = *h;
	while (current)
	{
		size++;
		temp = current;
		current = current->next;

		/* Break the loop for nodes that are being visited */
		temp->next = NULL;
		free(temp);

		/* If current points back to a previously visited node, stop */
		if (current == temp)
		{
			*h = NULL; /* Set head to NULL to indicate it's freed */
			return (size);
		}
	}

	*h = NULL; /* Set head to NULL to indicate it's freed */
	return (size);
}

