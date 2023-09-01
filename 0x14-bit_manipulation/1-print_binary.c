#include "main.h"

/**
 * print_binary - Print the binary representation of a number
 * @n: The number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1; /* Initialize */
	int bit_count = sizeof(unsigned long int) * 8;
	int printed = 0;

	/* Start from the leftmost bit (most significant bit) */
	mask <<= (bit_count - 1);

	if (n == 0)
	{
		/* Special case: if n is 0, print '0' and return */
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == 0)
			_putchar('0'); /* If the bit is 0, print '0' */
		else
		{
			_putchar('1'); /* If the bit is 1, print '1' */
			printed = 1; /* Set a flag indicating we've printed at least one '1' */
		}
		mask >>= 1; /* Shift the mask to the right to check the next bit */
	}

	if (!printed)
		_putchar('0'); /* If no '1' was printed (n was all zeros), print '0' */
}

