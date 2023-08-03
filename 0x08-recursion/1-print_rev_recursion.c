#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The input string.
 */
void _print_rev_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
	{
		/* Exit the function */
		return;
	}

	/* Recursively call with the next character */
	_print_rev_recursion(s + 1);

	_putchar(*s);
}

