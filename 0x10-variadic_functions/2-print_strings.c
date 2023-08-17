#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: Variable number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /* Declare a variable to hold the arguments */
	unsigned int i; /* Loop counter */
	char *str;  /* Declare a variable to hold a string */

	va_start(args, n); /* Initialize the argument list */

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *); /* Get the current string argument */

		if (str != NULL)
			printf("%s", str); /* Print the string */
		else
			printf("(nil)");  /* Print (nil) if the string is NULL */

		if (i != n - 1 && separator != NULL)
			printf("%s", separator); /* Print the separator if not the last string */
	}

	va_end(args); /* Clean up the argument list */

	printf("\n"); /* Print a new line at the end */
}

