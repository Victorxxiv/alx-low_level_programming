#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be converted and printed
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* Recursive call with right shift (divide by 2) */
		print_binary(n >> 1);
	}

	/* Print the least significant bit (0 or 1) */
	_putchar((n & 1) + '0');
}

