#include "main.h"

/**
 * print_line - Draws a straight line of underscores in the terminal
 * @n: The number of times the character '_' should be printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n'); /* Print new line if n is 0 or less */
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_'); /* Print '_' n times */
		}
		_putchar('\n'); /* Print new line at the end */
	}
}

