#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to the variable n
 * and prints the last digit of the number along with additional information.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	/* Seed the random number generator using the current time */
	srand(time(0));
	/* Generate a random number and assign it to the variable n */
	n = rand() - RAND_MAX / 2;
	/* Print the original number and its last digit */
	printf("Last digit of %d is %d", n, n % 10);
	/* Check conditions about the last digit and print corresponding messages */
	if (n % 10 > 5)
		printf(" and is greater than 5\n");
	else if (n % 10 == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}

