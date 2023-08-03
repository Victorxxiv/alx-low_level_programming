#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The input number.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
	/* Base case: factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}
	/* Base case: factorial of negative number is not defined */
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		/* Recursively calculate factorial for n-1 and multiply by n */
		return (n * factorial(n - 1));
	}
}

