#include "main.h"

/**
* get_bit - Get the value of a bit at a given index
* @n: The number to extract the bit from
* @index: The index of the bit to retrieve, starting from 0
*
* Return: The value of the bit at the given index or -1 if an error occurs
*/
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* Return -1 for out-of-range index */

	/* Shift the number right by 'index' bits and mask with 1 to extract bit */
	return ((n >> index) & 1);
}

