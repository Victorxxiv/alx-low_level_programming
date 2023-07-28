#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	/* If the number is negative, print a minus sign and make n positive */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* If n is not a single-digit number, call the function recursively */
	/* to print its digits from left to right */
	if (n / 10 != 0)
		print_number(n / 10);

	/* Print the last digit of the number */
	_putchar(n % 10 + '0');
}

