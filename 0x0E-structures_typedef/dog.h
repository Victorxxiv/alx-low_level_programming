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

/* Define the new type dog_t as an alias for struct dog */
typedef struct dog dog_t;

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

