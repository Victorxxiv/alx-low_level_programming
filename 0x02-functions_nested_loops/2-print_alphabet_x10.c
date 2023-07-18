#include "main.h"

/**
 * print_alphabet_x10 -  lowercase alphabet ten times followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;
	
	for (i = 0; i < 10; i++)
	{
		/* Loop through the lowercase alphabet */
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter); /* Print each lowercase letter */
		}
		
		_putchar('\n'); /* Move to the next line after printing the alphabet */
	}
}

