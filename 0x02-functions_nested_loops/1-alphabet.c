#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
	char letter;
	/* Loop through the lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter); /* Print each lowercase letter */
	}
	_putchar('\n'); /* Move to the next line after printing the alphabet */
}

