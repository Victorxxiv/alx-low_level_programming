#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: A pointer to the number in which to set the bit
 * @index: The index of the bit to set (0 for the least significant bit)
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is within the range of valid bits */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Return -1 on error */
	}

	/* Use left shift and bitwise OR to set the bit at the specified index */
	*n |= (1ul << index);

	return (1);
}

