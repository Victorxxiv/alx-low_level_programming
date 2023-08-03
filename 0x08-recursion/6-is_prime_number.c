#include "main.h"

/**
 * is_prime_recursive - Checks if a number is prime recursively.
 * @n: The number to check for primality.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	/* Base case: if divisor reaches 1, 'n' is prime */
	if (divisor == 1)
		return (1);

	 /* If 'n' is divisible by the current divisor, it's not prime */
	if (n % divisor == 0)
		return (0);

	 /* Continue recursion with a reduced divisor */
	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Wrapper function to check if a number is prime.
 * @n: The number to check for primality.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Negative numbers, 0, and 1 are not prime */
	if (n <= 1)
		return (0);

	/* Start recursion with 'n' and initial divisor */
	return (is_prime_recursive(n, n - 1));
}

