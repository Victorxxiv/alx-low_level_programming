#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	/* Swap the elements from the outer ends towards the center of the array */
	while (start < end)
	{
		/* Swap the elements using a temporary variable */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/* Move towards the center of the array */
		start++;
		end--;
	}
}

