#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of its parameters
 * @n: The number of arguments
 * @...: Variable number of arguments
 *
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	/* Declare a variable to hold the arguments */
	va_list args;
	unsigned int i; /* Loop counter */
	int sum = 0;  /* Initialize the sum to 0 */

	if (n == 0)
		return (0); /* If n is 0, return 0 as specified */

	va_start(args, n);  /* Initialize the argument list */

	for (i = 0; i < n; i++)
		sum += va_arg(args, int); /* Access and add each argument */

	va_end(args); /* Clean up the argument list */

	return (sum);  /* Return the sum of arguments */
}

