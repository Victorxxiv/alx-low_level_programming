#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program prints alphabet in lowercase, followed by uppercase,
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	/* Print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	/* Print uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	/* Print a new line */
	putchar('\n');
	return (0);
}

