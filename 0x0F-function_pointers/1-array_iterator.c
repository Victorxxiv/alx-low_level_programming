#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to execute.
 *
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Check if array and action pointers are not NULL */
	if (array != NULL && action != NULL)
	{
		size_t i;

		/* Iterate through the array and apply the specified function */
		for (i = 0; i < size; i++)
		{
			action(array[i]); /* Call the specified function on each element */
		}
	}
}

