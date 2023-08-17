#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints arguments based on the format string.
 * @format: A string containing format specifiers for the arguments.
 * c: char, i: integer, f: float, s: char*
 * (if the string is NULL, print (nil) instead) any other char is ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i]) /* Loop through the format string */
	{
		switch (format[i]) /* Check the format specifier */
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int)); /* Print char */
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int)); /* Print int */
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double)); /* Print float */
				break;
			case 's':
				{
					char *str = va_arg(args, char*);

					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str); /* Print string */
					break;
				}
			default:
				/* Skip unsupported format specifiers */
				i++;
				continue;
		}
		separator = ", "; /* Update separator for next argument */
		i++;
	}

	va_end(args); /* Clean up the va_list */
	printf("\n"); /* Print a newline character at the end */
}

