#include "main.h"

/**
 * print_diagonal - Draws a diagonal line of backslashes in the terminal
 * @n: The number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n'); /* Print new line if n is 0 or less */
	}
	else
	{
		for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' '); /* Print spaces before the backslashes */
		}
		_putchar('\\'); /* Print the backslash */
		_putchar('\n'); /* Print new line at the end of each line */
	}
	}
}

