#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits,
 * separated by ", ", in ascending order, with three digits.
 * such as 012, 120, 102, 021, 201, and 210 and prints only the smallest
 * combination.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;
	/* Print combinations of three digits */
	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');
				/* Print comma and space except for last combination */
				if (!(digit1 == 7 && digit2 == 8 && digit3 == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	/* Print a new line */
	putchar('\n');
	return (0);
}

