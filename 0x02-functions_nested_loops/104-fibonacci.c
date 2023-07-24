#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int prev = 1, curr = 2, next;
	int count;

	printf("%lu, %lu", prev, curr);

	for (count = 3; count <= 98; count++)
	{
		next = prev + curr;
		printf(", %lu", next);

		prev = curr;
		curr = next;
	}

	printf("\n");

	return (0);
}

