#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits,
 * separated by ", ", in ascending order, with two digits. 01 and 10 as the
 * same combination and prints only the smallest combination.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit;
	int secondDigit;
	/* Print combinations of two digits */
	for (firstDigit = 0; firstDigit <= 8; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
		{
			putchar(firstDigit + '0');
			putchar(secondDigit + '0');
			/* Print comma and space except for last combination */
			if (firstDigit != 8 || secondDigit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	/* Print a new line */
	putchar('\n');
	return (0);
}

