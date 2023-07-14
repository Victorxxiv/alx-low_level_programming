#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations of two two-digit
 * numbers, separated by a space and comma followed by a space. The numbers
 * range from 0 to 99, and all numbers are printed with two digits. The
 * combinations are printed in ascending order. The program considers
 * combinations such as 00 01 and 01 00 as the same combination of the numbers
 * 0 and 1, and only prints the smallest combination.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;
	/* Print combinations of two two-digit numbers */
	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');
			/* Print comma and space except for last combination */
			if (!(num1 == 98 && num2 == 99))
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

