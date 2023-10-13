#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index to 0
 * @n: A pointer to the number in which to clear the bit
 * @index: The index of the bit to clear (0 for the least significant bit)
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is within the range of valid bits */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Return -1 on error */
	}

	/* Use left shift and bitwise NOT with AND to clear the bit at index */
	*n &= ~(1ul << index);

	return (1);
}

