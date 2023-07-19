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
	/* Extract the last digit by taking the remainder when divided by 10 */
	last_digit = n % 10;
	/* Handle special case for INT_MIN */
	if (last_digit < 0)
		last_digit = -last_digit;
	/* Print the last digit */
	_putchar(last_digit + '0');
	return (last_digit);
}

