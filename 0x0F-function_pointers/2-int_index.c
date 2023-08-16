#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first matching element, or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* Check if the array and cmp function pointers are valid */
	if (array != NULL && cmp != NULL)
	{
		int i;

		/* Iterate through the array and apply the cmp function */
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i); /* Return the index of the first matching element */
		}
	}

	return (-1); /* Return -1 if no match is found or if input is invalid */
}

