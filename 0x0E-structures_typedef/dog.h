#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's information
 * @name: Name of the dog (char *)
 * @age: Age of the dog (float)
 * @owner: Owner's name of the dog (char *)
 *
 * Description: This structure represents information about a dog.
 */
struct dog
{
	char *name; /* Name of the dog */
	float age; /* Age of the dog */
	char *owner; /* Owner's name of the dog */
};

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

