#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Name of the dog (char *)
 * @age: Age of the dog (float)
 * @owner: Owner's name of the dog (char *)
 *
 * Description: This function initializes a struct dog with the provided data.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if d is not NULL before initializing */
	if (d != NULL)
	{
		d->name = name; /* Set the name of the dog */
		d->age = age; /* Set the age of the dog */
		d->owner = owner; /* Set the owner's name of the dog */
	}
}

