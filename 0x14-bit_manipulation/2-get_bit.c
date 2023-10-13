#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to extract the bit from
 * @index: The index of the bit to get (0 for the least significant bit)
 * Return: The value of the bit at the specified index, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if the index is within the range of valid bits */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1); /* Return -1 on error */
	}

	/* Right shift n by index positions and mask with 1 to get bit value */
	return (n >> index & 1);
}

