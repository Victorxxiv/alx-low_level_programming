#include "main.h"

/**
 * print_sign - Checks the sign of a number and prints a corresponding symbol.
 * @n: The number to be checked for its sign.
 *
 * Description: This function takes integer number 'n' as input and checks its
 * sign. If 'n' is greater than zero, it prints the symbol '+' to represent a
 * positive number and returns the value 1. If 'n' is equal to zero, it prints
 * the digit '0' to indicate that the number is zero and returns the value 0.
 * If 'n' is less than zero, it prints the symbol '-' to represent a negative
 * number and returns the value -1.
 *
 * Return: 1 if 'n' is greater than zero (positive).
 *         0 if 'n' is zero.
 *        -1 if 'n' is less than zero (negative).
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

