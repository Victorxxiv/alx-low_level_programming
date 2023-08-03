#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	/* Base case: if exponent is 0, result is 1 */
	if (y == 0)
	{
		return (1);
	}
	 /* Base case: if exponent is negative, return -1 */
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		/* Recursively calculate power for x^(y-1) and multiply by x */
		return (x * _pow_recursion(x, y - 1));
	}
}

