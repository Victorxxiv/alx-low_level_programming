#ifndef LISTS_H
#define LISTS_H

int _putchar(char c);

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Function prototypes */
listint_t *add_nodeint(listint_t **head, int n);
void free_listint(listint_t *head);
size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
