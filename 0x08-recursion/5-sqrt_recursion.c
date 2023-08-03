#include "main.h"

/**
 * sqrt_recursive - Calculates the natural square root of a number recursively.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of 'n', or -1 if no natural square root.
 */
int sqrt_recursive(int n, int guess)
{
	/* Check if the square of the guess is equal to n */
	if (guess * guess == n)
		return (guess);

	 /* Check if the square of the guess is greater than n */
	if (guess * guess > n)
		return (-1);

	 /* Continue recursion with an incremented guess */
	return (sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Wrapper function to calculate square root recursively.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of 'n', or -1 if no natural square root.
 */
int _sqrt_recursion(int n)
{
	/* Check if the input number is negative */
	if (n < 0)
		return (-1);

	/* Start the recursion with a guess of 0 */
	return (sqrt_recursive(n, 0));
}

