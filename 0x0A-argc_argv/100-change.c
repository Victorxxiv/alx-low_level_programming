#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	 /* Check if the number of arguments is not 2 */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the argument to cents */
	cents = atoi(argv[1]);

	/* Check if the amount is negative */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate the number of coins */
	while (cents >= 25) /* Quarters (25 cents) */
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10) /* Dimes (10 cents) */
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5) /* Nickels (5 cents) */
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2) /* 2 cents */
	{
		cents -= 2;
		coins++;
	}
	while (cents >= 1) /* Pennies (1 cent) */
	{
		cents -= 1;
		coins++;
	}

	/* Print the minimum number of coins */
	printf("%d\n", coins);

	return (0);
}

