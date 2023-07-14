#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse,
 * followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	/* Start with 'z' and print each letter in reverse */
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	/* Print a new line */
	putchar('\n');
	return (0);
}

