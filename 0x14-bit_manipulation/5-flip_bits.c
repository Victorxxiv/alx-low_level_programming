#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Calculate the XOR of n and m to find differing bits */
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		/* Check the least significant bit and increment count if set */
		count += xor_result & 1;
		xor_result >>= 1; /* Right shift to check the next bit */
	}

	return (count);
}

