#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Find the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor
 */
long largest_prime_factor(long n)
{
	long largestFactor = -1;

	while (n % 2 == 0)
	{
		largestFactor = 2;
		n /= 2;
	}

	for (long i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largestFactor = i;
			n /= i;
		}
	}

	if (n > 2)
		largestFactor = n;

	return (largestFactor);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;

	long result = largest_prime_factor(number);

	printf("%ld\n", result);
	return (0);
}

