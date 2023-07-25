#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int i, sum, random;

	/* Seed the random number generator with the current time */
	srand(time(NULL));

	sum = 0;
	i = 0;

	while (sum < 2772)
	{
		/* Generate a random ASCII character between '!' and '~' */
		random = rand() % 94 + 33;

		if (sum + random > 2772)
			random = 2772 - sum;

		password[i++] = random;
		sum += random;
	}

	password[i] = '\0'; /* Null-terminate the password string */

	printf("%s\n", password);

	return (0);
}

