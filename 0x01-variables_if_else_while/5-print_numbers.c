#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single-digit numbers of base 10 starting from 0,
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	/* Print single-digit numbers of base 10 */
	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}
	/* Print a new line */
	putchar('\n');
	return (0);
}

