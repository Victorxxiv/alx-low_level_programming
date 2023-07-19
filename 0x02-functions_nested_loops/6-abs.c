#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The number for which the absolute value needs to be computed.
 *
 * Description: This function takes an integer number 'n' as input
 * and returns its absolute value. The absolute value of a number is
 * its positive value, regardless of whether the original
 * number is positive or negative. If 'n' is greater than or equal to zero,
 * the function simply returns 'n' as it is already positive.
 * If 'n' is negative, the function returns the negation of 'n'
 * (the positive counterpart of the negative number).
 *
 * Return: The absolute value of 'n'.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

