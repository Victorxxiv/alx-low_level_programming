#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int i, j, product;
	/* Variable declarations */
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			/* Print a comma and space if not the first element in the row */
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				/* Print an extra space for single-digit products */
				if (product < 10)
					_putchar(' ');
			}
			/* Print the product */
			_putchar('0' + (product / 10));
			_putchar('0' + (product % 10));
		}
		_putchar('\n');
	}
}

