#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers,
 * separated by ", ", in ascending order, using the putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	/* Print numbers 0-9 with comma and space */
	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		/* Print comma and space except for number 9 */
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	/* Print a new line */
	putchar('\n');
	return (0);
}

