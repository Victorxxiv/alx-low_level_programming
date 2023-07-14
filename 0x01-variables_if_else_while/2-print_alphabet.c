#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program prints alphabet in lowercase using putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	/* Start with 'a' and print each letter using putchar */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	/* Print a new line after printing the alphabet */
	putchar('\n');
	return (0);
}

