#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function prints the name of the source file it was compiled from.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print the name of the file it was compiled from, followed by a new line */
	printf("%s\n", __FILE__);
	return (0);
}

