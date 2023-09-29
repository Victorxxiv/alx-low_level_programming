#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to a string containing '0' and '1' characters.
 *
 * Return: The converted number, or 0 if an invalid character is found.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; /* Initialize the result to 0. */

	if (b == NULL) /* Check if the input string is NULL. */
		return (0);

	/* Iterate through the characters in the string. */
	while (*b)
	{
		/* Check if the current character is '0' or '1'. */
		if (*b != '0' && *b != '1')
			return (0); /* Invalid character, return 0. */

		/**
		 * Shift the current result left by 1 (multiply by 2) and add the
		 * integer value of the current character to it.
		 */
		result = (result << 1) | (*b - '0');
		b++; /* Move to the next character in the string. */
	}

	return (result); /* Return the final converted result. */
}

