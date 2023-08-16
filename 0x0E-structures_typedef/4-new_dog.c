#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the newly created dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0; /* Initialize variable to store length of name */
	int owner_len = 0; /* Initialize variable to store length of owner */
	int i; /* Loop counter */
	dog_t *new_dog; /* Pointer to the newly created dog */

	/* Calculate the length of name and owner strings */
	while (name[name_len])
		name_len++;

	while (owner[owner_len])
		owner_len++;

	/* Allocate memory for the new dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the copy of name and owner strings */
	new_dog->name = malloc(name_len + 1);
	new_dog->owner = malloc(owner_len + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	/* Copy the name and owner strings */
	for (i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i];

	for (i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];

	/* Set the age of the dog */
	new_dog->age = age;

	return (new_dog);
}


