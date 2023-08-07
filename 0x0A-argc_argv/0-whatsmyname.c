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
	(void)argc; /* Unused parameter to avoid compiler warning */

	printf("%s\n", argv[0]);

	return (0);
}

