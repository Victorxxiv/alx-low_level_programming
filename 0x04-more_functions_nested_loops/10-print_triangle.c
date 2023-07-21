#include "main.h"

/**
 * print_triangle - Prints right-angled triangle of '#' characters in terminal
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n'); /* Print new line if size is 0 or less */
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar('#'); /* Print '#' in each row, increasing in size */
			}
			_putchar('\n'); /* Print new line after each row */
		}
	}
}

