#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char digit;
	/* Print numbers 0-9 */
	for (number = 0; number <= 9; number++)
	{
		digit = number + '0';
		putchar(digit);
	}
	/* Print letters a-f */
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}
	/* Print a new line */
	putchar('\n');
	return (0);
}

