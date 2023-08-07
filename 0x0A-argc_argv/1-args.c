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
	 /* Unused parameter to avoid compiler warning */
	(void)argv;

	/* Print the number of arguments passed, excluding the program name */
	printf("%d\n", argc - 1);

	/* Indicate successful execution */
	return (0);
}

