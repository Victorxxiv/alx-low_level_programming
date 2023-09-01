#include "main.h"

/**
* print_binary - Print the binary representation of a number
* @n: The number to be printed in binary
*/
void print_binary(unsigned long int n)
{
	int bit_count = sizeof(unsigned long int) * 8; /* Calculate number of bits */
	int i;
	int flag = 0; /* A flag to indicate when the first '1' is encountered */

	if (n == 0)
	{
		_putchar('0'); /* Special case: if n is 0, print '0' and return */
		return;
	}

	for (i = bit_count - 1; i >= 0; i--)
	{
		if ((n >> i) & 1) /* Check the i-th bit from the left */
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}

