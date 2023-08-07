#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i; // Declare variables at the beginning of the block */

	(void)argc; /* Unused parameter to avoid compiler warning */

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	/* Indicate successful execution */
	return (0);
}

