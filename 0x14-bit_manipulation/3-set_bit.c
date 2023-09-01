#include "main.h"

/**
* set_bit - Set the value of a bit to 1 at a given index
* @n: Pointer to the number to modify
* @index: The index of the bit to set, starting from 0
*
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* Return -1 for out-of-range index */

	/* Set the bit at 'index' to 1 using bitwise OR */
	*n = *n | (1 << index);

	return (1);
}

