#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: Variable number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /* Declare a variable to hold the arguments */
	unsigned int i; /* Loop counter */

	va_start(args, n); /* Initialize the argument list */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int)); /* Print the current argument */

		if (i != n - 1 && separator != NULL)
			printf("%s", separator); /* Print the separator if not the last number */
	}

	va_end(args); /* Clean up the argument list */

	printf("\n");  /* Print a new line at the end */
}

