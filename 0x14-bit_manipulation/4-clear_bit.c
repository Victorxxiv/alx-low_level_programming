#include "main.h"

/**
* clear_bit - Set the value of a bit to 0 at a given index
* @n: Pointer to the number to modify
* @index: The index of the bit to clear, starting from 0
*
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* Return -1 for out-of-range index */

	/* Clear the bit at 'index' to 0 using bitwise AND and NOT */
	*n = *n & ~(1 << index);

	return (1);
}

