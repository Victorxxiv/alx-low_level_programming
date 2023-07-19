#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number whose last digit is to be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;
	/* Handle special case for INT_MIN */
	if (n == INT_MIN)
	{
		_putchar('8');
		return (8);
	}
	/* Get the absolute value of n to handle negative numbers */
	if (n < 0)
		n = -n;
	/* Extract the last digit by taking the remainder when divided by 10 */
	last_digit = n % 10;
	/* Print the last digit */
	_putchar(last_digit + '0');
	return (last_digit);
}

