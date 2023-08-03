#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The input string.
 */
void _puts_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
	{
		/* Print a new line character */
		_putchar('\n');
		return;
	}

	/* Print the current character */
	_putchar(*s);

	/* Recursively call with the next character */
	_puts_recursion(s + 1);
}

