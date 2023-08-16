#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to the struct dog to print
 */
void print_dog(struct dog *d)
{
	/* Check if d is not NULL */
	if (d != NULL)
	{
		/* Print the name, handling NULL case */
		printf("Name: %s\n", d->name ? d->name : "(nil)");

		/* Print the age */
		printf("Age: %.6f\n", d->age);

		/* Print the owner, handling NULL case */
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

