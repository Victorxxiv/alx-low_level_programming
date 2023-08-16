#include "function_pointers.h"

/**
 * print_name - Prints a name using a specified formatting function.
 * @name: Pointer to the name string to be printed.
 * @f: Pointer to the formatting function to be used.
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name); /* Call the provided formatting function */
}

